/*
 * DIO_Private.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Aspire
 */

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#include"../../LIB/LBIT_MATH.h"
#include"../../LIB/LSTD_TYPES.h"

#define DDRA_REG  *( (volatile u8* ) 0x3A)
#define PORTA_REG  *( (volatile u8* ) 0x3B)
#define PINA_REG  *( (volatile u8* ) 0x39)

#define DDRB_REG  *( (volatile u8* ) 0x37)
#define PORTB_REG *( (volatile u8* ) 0x38)
#define PINB_REG  *( (volatile u8* ) 0x36)

#define DDRC_REG  *( (volatile u8* ) 0x34)
#define PORTC_REG *( (volatile u8* ) 0x35)
#define PINC_REG  *( (volatile u8* ) 0x33)

#define DDRD_REG  *( (volatile u8* ) 0x31)
#define PORTD_REG *( (volatile u8* ) 0x32)
#define PIND_REG  *( (volatile u8* ) 0x30)


#endif /* DIO_PRIVATE_H_ */
