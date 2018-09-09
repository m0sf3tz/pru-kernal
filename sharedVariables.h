#define SPINLOCK_BUFFER_PA (0x480CA800)  //safeguard to memory that keeps track of buffer allocations
 
#define STAT_LOCK_OFFSET   (0x480CA808)  //memory modified by PRU, read by ARM

#define SHBUF_SIZE             (0x10000)

#define SHBUF0_START_PA        (0x90000000)
#define SHBUF1_START_PA        (SHBUF0_START_PA + SHBUF_SIZE)
#define SHBUF2_START_PA        (SHBUF1_START_PA + SHBUF_SIZE)
#define SHBUF3_START_PA        (SHBUF2_START_PA + SHBUF_SIZE)
#define SHBUF4_START_PA        (SHBUF3_START_PA + SHBUF_SIZE)

#define SHBUF_CTRL_BLOCK_PA    (SHBUF4_START_PA + SHBUF_SIZE)
#define SHBUF_TOTAL_BUFS       0x5

#define BYTES_PER_DWORD 4


#define SHARED_BUFFER_FREE      (0)
#define SHARED_BUFFER_TAKEN     (1)
#define ERROR_GETTING_BUFFER    (0xFF)
