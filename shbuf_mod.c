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
#include "constants.h"

#define FIRST_MINOR 0
#define MINOR_CNT 1

#define DEBUG_PRINTK 0 
#define DEBUG_MERCY  1
 
static dev_t dev;
static struct cdev c_dev;
static struct class *cl;


static uint32_t __iomem* SHBUF0_START_VA;
static uint32_t __iomem* SHBUF1_START_VA;
static uint32_t __iomem* SHBUF2_START_VA;
static uint32_t __iomem* SHBUF3_START_VA;
static uint32_t __iomem* SHBUF4_START_VA;
static uint32_t __iomem* SHBUF_CTRL_BLOCK_VA;
static uint32_t __iomem* SPINLOCK_BUFFER_VA;



static const u32  buffSize = SHBUF_SIZE; 
char * tempBuff;

static void putBuffLock();
static void getBuffLock();

static u8 getFullBuffer();
static u8 clearBufferUsed(u8);

static int my_open(struct inode *i, struct file *f);
static int my_close(struct inode *i, struct file *f);
static ssize_t shbuf_read(struct file * f , char * dest , size_t len , loff_t * t);


static int my_open(struct inode *i, struct file *f)
{  
    return 0;
}
static int my_close(struct inode *i, struct file *f)
{
    return 0;
}


static u8 getFullBuffer()
{
    getBuffLock();

    int iter;
    uint32_t * iterPter = (uint32_t *)SHBUF_CTRL_BLOCK_VA;

    for(iter = 0; iter <= SHBUF_TOTAL_BUFS; iter++)
    {
        if (iter == SHBUF_TOTAL_BUFS)
        {
            putBuffLock();
            return ERROR_GETTING_BUFFER;
        }

        if(*iterPter == SHARED_BUFFER_TAKEN)
        {
            putBuffLock();
            return iter;
        }

        iterPter++;
    }

    putBuffLock();
    return ERROR_GETTING_BUFFER; //error condition
}


static u8 clearBufferUsed(u8 buffer)
{
    getBuffLock();

    //sanitize input
    if(buffer > SHBUF_TOTAL_BUFS)
    {
        printk("critical error in clearBufferUsed, buffer out of bounds \n"); 
    }

    uint32_t * bufPtr = (uint32_t *)SHBUF_CTRL_BLOCK_VA;

    bufPtr = bufPtr + buffer;

    *bufPtr = SHARED_BUFFER_FREE;

    putBuffLock();

}

static ssize_t shbuf_read(struct file * f , char * dest , size_t len , loff_t * t)
{
    
    u8 freeBuffer = getFullBuffer();
    
    if(freeBuffer == ERROR_GETTING_BUFFER)
    {
        #if DEBUG_PRINTK
        printk("All buffers are empty \n");
        #endif //DEBUG_PRINTK
        return 0;
    }
    
    printk("reading something... \n");
    
    
    //calculate the shared buffer offset into DRAM to copy to user space
    u32 bufferCopy = SHBUF0_START_VA + freeBuffer*SHBUF_SIZE;
    
    if(copy_to_user(dest, (void*)bufferCopy,TOTAL_BYTES_IN_SECTOR)){
        printk("Failed to flush buffer to user space - unhandled exception' \n");
        return -EIO;
    }  
    
    clearBufferUsed(freeBuffer);

    return TOTAL_BYTES_IN_SECTOR;
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
            putBuffLock();

            
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
 

    SHBUF0_START_VA          = ioremap_nocache (SHBUF0_START_PA         , SHBUF_SIZE);
    SHBUF1_START_VA          = ioremap_nocache (SHBUF1_START_PA         , SHBUF_SIZE);
    SHBUF2_START_VA          = ioremap_nocache (SHBUF2_START_PA         , SHBUF_SIZE);
    SHBUF3_START_VA          = ioremap_nocache (SHBUF2_START_PA         , SHBUF_SIZE);
    SHBUF4_START_VA          = ioremap_nocache (SHBUF3_START_PA         , SHBUF_SIZE);
    
    SHBUF_CTRL_BLOCK_VA      = ioremap_nocache (SHBUF_CTRL_BLOCK_PA     , SHBUF_TOTAL_BUFS*sizeof(u32));
    SPINLOCK_BUFFER_VA       = ioremap_nocache (SPINLOCK_BUFFER_PA, sizeof(u32));
    
    tempBuff = kmalloc( SHBUF_SIZE , GFP_KERNEL);
    
    return 0;
}
 
  
static void __exit shbuf_exit(void)
{
    iounmap(SHBUF0_START_VA);
    iounmap(SHBUF1_START_VA);
    iounmap(SHBUF2_START_VA);
    iounmap(SHBUF3_START_VA); 
    iounmap(SHBUF4_START_VA);
    iounmap(SHBUF_CTRL_BLOCK_VA);
    iounmap(SPINLOCK_BUFFER_VA);
    
    kfree(tempBuff);

    device_destroy(cl, dev);
    class_destroy(cl);
    cdev_del(&c_dev);
    unregister_chrdev_region(dev, MINOR_CNT);
}
 

static void getBuffLock(){
#if DEBUG_PRINTK
    printk("waiting to get head lock \n");
#endif
    int count = 2000;
    while(*(volatile uint32_t*)SPINLOCK_BUFFER_VA){
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

static void putBuffLock(){
#if DEBUG_PRINTK
    printk("Put back Head lock \n");
#endif

    (*(volatile uint32_t*)SPINLOCK_BUFFER_VA) = 0;
    dmb();
}

 
 
module_init(shbuf_init);
module_exit(shbuf_exit);
 
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sam Hoshyar");
MODULE_DESCRIPTION("AM335x SPINLOCK Driver");
