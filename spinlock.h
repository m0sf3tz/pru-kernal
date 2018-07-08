/*
 * spinlock.h
 *
 *  Created on: Jul 2, 2018
 *      Author: Sam2
 */

#pragma once


extern void getPruLock(); //head (moved by PRU)
extern void putPruLock(); //head (moved by PRU)


extern void getArmLock(); //tail (moved by ARM)
extern void putArmLock(); //tail (moved by ARM)



