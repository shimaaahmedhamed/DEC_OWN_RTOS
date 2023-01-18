/*
 * LCD_configure.h
 *
 *  Created on: Nov 11, 2022
 *      Author: Aspire
 */

#ifndef LCD_CONFIGURE_H_
#define LCD_CONFIGURE_H_

#include"LCD_interface.h"
#include"../../MCAL/DIO/DIO_interface.h"
#define MODE       4BIT
#define RS_PORT    PORTA_ID
#define RS_PIN     PIN2


#define EN_PORT    PORTA_ID
#define EN_PIN     PIN3

#define D4_PORT    PORTA_ID
#define D4_PIN     PIN4

#define D5_PORT    PORTA_ID
#define D5_PIN     PIN5

#define D6_PORT    PORTA_ID
#define D6_PIN     PIN6

#define D7_PORT    PORTA_ID
#define D7_PIN     PIN7

#endif /* LCD_CONFIGURE_H_ */
