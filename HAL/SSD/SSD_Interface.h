/*
 * SSD_Interface.h
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#ifndef HAL_SSD_SSD_INTERFACE_H_
#define HAL_SSD_SSD_INTERFACE_H_

/*-------------------------------------------------------*/
/*   Include    */
/*-------------------------------------------------------*/
#include <util/delay.h>
#include "../../LIB/LSTD_TYPES.h"
#include "../../MCAL/DIO/DIO_Interface.h"


/*-------------------------------------------------------*/
/*   ProtoType    */
/*-------------------------------------------------------*/
void H_SevenSegDispaly_void_SvenSegDisplayInit(void);
void H_SevenSegDispaly_void_SvenSegDisplaySingleValue(u8);


#endif /* HAL_SSD_SSD_INTERFACE_H_ */
