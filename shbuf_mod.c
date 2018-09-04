#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/version.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/errno.h>
#include <linux/uaccess.h>
#include <linux/slab.h>
#include <asm/uaccess.h>
#include <asm/io.h>
#include <linux/atomic.h>

 

#include "shbuf_ioctl.h"
#include "hw_cm_per.h"
#include "soc_AM335x.h"
#include "sharedVariables.h"

#define FIRST_MINOR 0
#define MINOR_CNT 1

#define DEBUG_PRINTK 0 
#define DEBUG_MERCY  1
 
static dev_t dev;
static struct cdev c_dev;
static struct class *cl;

static uint32_t __iomem* SPINLOCK_PRU_HEAD_VA;
static uint32_t __iomem* SPINLOCK_ARM_TAIL_VA;

static uint32_t __iomem* SHBUF0_START_VA;
static uint32_t __iomem* SHBUF0_HEAD_OFFSET_VA;
static uint32_t __iomem* SHBUF0_TAIL_OFFSET_VA;
  
static u32* sharedHead; //shared w/ PRU
static u32* sharedtail; //shared w/ PRU
static u32* zeroth; 
static const u32  buffSize = SHBUF0_SIZE; 

char * tempBuff;

static void getHeadLock();
static void putHeadLock();
static void getTailLock();
static void putTailLock();

static void circular_buf_next_tail(uint32_t get);
static int my_open(struct inode *i, struct file *f);
static int my_close(struct inode *i, struct file *f);
static void wrap_around_memget(char * dest, uint32_t len);
static int circular_buf_space();
static ssize_t shbuf_read(struct file * f , char * dest , size_t len , loff_t * t);


static int my_open(struct inode *i, struct file *f)
{  
    return 0;
}
static int my_close(struct inode *i, struct file *f)
{
    return 0;
}


void circular_buf_next_tail(uint32_t get)
{
    getTailLock();
    //printk("bofore tail is at %u \n", *SHBUF0_TAIL_OFFSET_VA);
    *SHBUF0_TAIL_OFFSET_VA = (*SHBUF0_TAIL_OFFSET_VA + get)%buffSize;
    //printk("after tail is at %u \n", *SHBUF0_TAIL_OFFSET_VA);
    putTailLock();
}

static void wrap_around_memget(char * dest, uint32_t len)
{
    getTailLock();
    uint32_t tail = *SHBUF0_TAIL_OFFSET_VA;
    putTailLock();    
    
    if(tail + len <= (buffSize)){
        memcpy((void*)dest, (void*)((uint32_t)tail + (uint32_t)SHBUF0_START_VA), len);
    }
        else
    {
        
        uint32_t lenTop = (buffSize- tail);
        uint32_t lenBot = (tail + len) % buffSize;;

        memcpy((void*)(dest)                 , (void*)(tail   + (uint32_t)SHBUF0_START_VA), lenTop);
        memcpy((void*)((uint32_t)dest+lenTop), (void*)(SHBUF0_START_VA),                    lenBot);
    }
}



static int circular_buf_space()
{
    getHeadLock();
    uint32_t head = *SHBUF0_HEAD_OFFSET_VA;
    putHeadLock();

    getTailLock();
    uint32_t tail = *SHBUF0_TAIL_OFFSET_VA;
    putTailLock();       
    
    //printk("head value is at %u \n", *SHBUF0_HEAD_OFFSET_VA);
    //printk("tail value is at %u \n", *SHBUF0_TAIL_OFFSET_VA);
           
    if(head == tail)
        return buffSize;

    else if(head > tail)
        return (buffSize - (head - tail) - 1);

    else if(head < tail)
        return (tail - head) - 1;

    else
        return -1;

}

static ssize_t shbuf_read(struct file * f , char * dest , size_t len , loff_t * t){

    u32 used;
    int ret;
    int size;
   
    ret = 0;
    
    if(circular_buf_space() == SHBUF0_SIZE)
        return ret;
    
    size = SHBUF0_SIZE - circular_buf_space() - 1;
      
    //if buffer has 5 elements in it, and we want to read 8, read 5 so we don't underflow  
    if(len > size)
        len = size;     
        
    wrap_around_memget(tempBuff, len);
        
    circular_buf_next_tail(len);
    
    if(copy_to_user(dest, (void*)tempBuff,len)){
        printk("Failed to flush buffer to user space - unhandled exception' \n");
        return -EIO;
    }  

    return len;
}

#if (LINUX_VERSION_CODE < KERNEL_VERSION(2,6,35))
static int my_ioctl(struct inode *i, struct file *f, unsigned int cmd, unsigned long arg)
#else
static long my_ioctl(struct file *f, unsigned int cmd, unsigned long arg)
#endif
{
    void __iomem * c1; 
    int count;
    switch (cmd)
    {
        case SPINLOCK_RESET:   
            printk("starting resetting SPINLOCK block \n");

            c1   = ioremap(SOC_PRCM_REGS+CM_PER_SPINLOCK_CLKCTRL, sizeof(u32));
            writel_relaxed(0x2, c1);
             
            dmb();  //make sure above write goes through...
            
            //quick deleay (setup time for clock)
            count = 1000;
            while(count--)
            {
            }
            
            //release locks
            putHeadLock();
            putTailLock();
            
            printk("finished resetting SPINLOCK block \n");
            break;  

        default:
            return -EINVAL;
    }
 
    return 0;
}
 
static struct file_operations pru_ctrl_fops =
{
    .owner = THIS_MODULE,
    .open = my_open,
    .release = my_close,
    .read = shbuf_read,
#if (LINUX_VERSION_CODE < KERNEL_VERSION(2,6,35))
    .ioctl = my_ioctl
#else
    .unlocked_ioctl = my_ioctl
#endif
};
 
static int __init shbuf_init(void)
{
    int ret;
    struct device *dev_ret;
 
 
    if ((ret = alloc_chrdev_region(&dev, FIRST_MINOR, MINOR_CNT, "shbuf")) < 0)
    {
        return ret;
    }
 
    cdev_init(&c_dev, &pru_ctrl_fops);
 
    if ((ret = cdev_add(&c_dev, dev, MINOR_CNT)) < 0)
    {
        return ret;
    }
     
    if (IS_ERR(cl = class_create(THIS_MODULE, "shbuf")))
    {
        cdev_del(&c_dev);
        unregister_chrdev_region(dev, MINOR_CNT);
        return PTR_ERR(cl);
    }
    if (IS_ERR(dev_ret = device_create(cl, NULL, dev, NULL, "shbuf")))
    {
        class_destroy(cl);
        cdev_del(&c_dev);
        unregister_chrdev_region(dev, MINOR_CNT);
        return PTR_ERR(dev_ret);
    }
 
 
    SPINLOCK_PRU_HEAD_VA    = ioremap_nocache (SPINLOCK_PRU_HEAD, sizeof(u32));
    SPINLOCK_ARM_TAIL_VA    = ioremap_nocache (SPINLOCK_ARM_TAIL, sizeof(u32));

    SHBUF0_START_VA          = ioremap_nocache (SHBUF0_START           , SHBUF0_SIZE);
    SHBUF0_HEAD_OFFSET_VA    = ioremap_nocache (SHBUF0_HEAD_OFFSET     , sizeof(u32));
    SHBUF0_TAIL_OFFSET_VA    = ioremap_nocache (SHBUF0_TAIL_OFFSET     , sizeof(u32)); 
 
    tempBuff = kmalloc( SHBUF0_SIZE , GFP_KERNEL);
    
    return 0;
}
 
  
static void __exit shbuf_exit(void)
{
    iounmap(SPINLOCK_PRU_HEAD_VA);
    iounmap(SPINLOCK_ARM_TAIL_VA);

    iounmap(SHBUF0_START_VA      );
    iounmap(SHBUF0_HEAD_OFFSET_VA);
    iounmap(SHBUF0_TAIL_OFFSET_VA);
    
    kfree(tempBuff);

    device_destroy(cl, dev);
    class_destroy(cl);
    cdev_del(&c_dev);
    unregister_chrdev_region(dev, MINOR_CNT);
}
 

static void getHeadLock(){
#if DEBUG_PRINTK
    printk("waiting to get head lock \n");
#endif
    int count = 2000;
    while(*(volatile uint32_t*)SPINLOCK_PRU_HEAD_VA){
#ifdef DEBUG_MERCY
        count--;
        if(count == 0){
            printk("failed to get head lock \n");
            return;
        }
#endif
    }

    dmb();    
#if DEBUG_PRINTK
    printk("got head lock \n");
#endif
}

static void putHeadLock(){
#if DEBUG_PRINTK
    printk("Put back Head lock \n");
#endif

    (*(volatile uint32_t*)SPINLOCK_PRU_HEAD_VA) = 0;
    dmb();
}

static void getTailLock(){
#if DEBUG_PRINTK
    printk("waiting to get tail lock \n");
#endif
    int count = 2000;
    while(*(volatile uint32_t*)SPINLOCK_ARM_TAIL_VA){
#ifdef DEBUG_MERCY
        count--;
        if(count == 0){
            printk("failed to get tail lock \n");
            return;
        }
#endif
    }
    dmb();
#if DEBUG_PRINTK
    printk("got tail lock \n");
#endif
}

static void putTailLock(){
#if DEBUG_PRINTK
    printk("Put back tail lock \n");
#endif 
    (*(volatile uint32_t*)SPINLOCK_ARM_TAIL_VA) = 0;
    dmb();
}
 
 
module_init(shbuf_init);
module_exit(shbuf_exit);
 
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sam Hoshyar");
MODULE_DESCRIPTION("AM335x SPINLOCK Driver");
