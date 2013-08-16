// *******************************************************************
//  TWI.h
//
//  char repository.
//
//  Copyright by kaiser. All rights reserved.
// *******************************************************************
#ifndef _TWI_H_
#define _TWI_H_

/*----------------------------------------------------------------------------
 *        Macro
 *----------------------------------------------------------------------------*/
// device address on i2c bus
#define LM73_DEVICE_ADDRESS  (0x92 >> 1)
#define TSL2550_DEVICE_ADDRESS (0X39)

/*----------------------------------------------------------------------------
 *        Prototype
 *----------------------------------------------------------------------------*/
void twi_init(void);
void twi_wr(int32u addr, int8u data);
/******************************************************************************\
 * twi read action .
\******************************************************************************/
void twi_rd(int32u addr);
#endif /*_TWI_H_*/
