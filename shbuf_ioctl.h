#pragma once

#include <linux/ioctl.h>
#define SHBUF_IOC_MAGIC  's'

#define SPINLOCK_RESET           _IO(SHBUF_IOC_MAGIC, 1)

