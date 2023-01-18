/*
 * SSD_Prog.c
 *
 *  Created on: ???/???/????
 *      Author: dell
 */
#include "SSD_Interface.h"
#include "SSD_Config.h"

void H_SevenSegDispaly_void_SvenSegDisplayInit(void)
{
	/*****************Decoder pins***********************/
	M_DIO_Void_SetPinDirection(First_SevenSegControl, OUTPUT);
	M_DIO_Void_SetPinDirection(Second_SevenSegControl, OUTPUT);
	M_DIO_Void_SetPinDirection(Third_SevenSegControl, OUTPUT);
	M_DIO_Void_SetPinDirection(Fourth_SevenSegControl, OUTPUT);

	/*******************************************************/

	/***********************Power 7seg*************************/
	M_DIO_Void_SetPinDirection(Second_SevenSegPower, OUTPUT);           //A4 second 7seg
	M_DIO_Void_SetPinDirection(First_SevenSegPower, OUTPUT);          //A5 first 7Seg


}



void H_SevenSegDispaly_void_SvenSegDisplaySingleValue(u8 Copy_u32_SingleNumber)
{
	switch (Copy_u32_SingleNumber)
	{

	case 0:
		DIO_voidSetPinValue(PORTC_ID,PIN0,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN1,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN2,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN3,PIN_LOW);
		break;


	case 1:
		DIO_voidSetPinValue(PORTC_ID,PIN0,PIN_HIGH);
		DIO_voidSetPinValue(PORTC_ID,PIN1,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN2,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN3,PIN_LOW);
		break;
	case 2:
		DIO_voidSetPinValue(PORTC_ID,PIN0,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN1,PIN_HIGH);
		DIO_voidSetPinValue(PORTC_ID,PIN2,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN3,PIN_LOW);
		break;

	case 3:
		DIO_voidSetPinValue(PORTC_ID,PIN0,PIN_HIGH);
		DIO_voidSetPinValue(PORTC_ID,PIN1,PIN_HIGH);
		DIO_voidSetPinValue(PORTC_ID,PIN2,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN3,PIN_LOW);
		break;


	case 4:
		DIO_voidSetPinValue(PORTC_ID,PIN0,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN1,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN2,PIN_HIGH);
		DIO_voidSetPinValue(PORTC_ID,PIN3,PIN_LOW);
		break;
	case 5:
		DIO_voidSetPinValue(PORTC_ID,PIN0,PIN_HIGH);
		DIO_voidSetPinValue(PORTC_ID,PIN1,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN2,PIN_HIGH);
		DIO_voidSetPinValue(PORTC_ID,PIN3,PIN_LOW);
		break;
	case 6:
		DIO_voidSetPinValue(PORTC_ID,PIN0,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN1,PIN_HIGH);
		DIO_voidSetPinValue(PORTC_ID,PIN2,PIN_HIGH);
		DIO_voidSetPinValue(PORTC_ID,PIN3,PIN_LOW);
		break;
	case 7:
		DIO_voidSetPinValue(PORTC_ID,PIN0,PIN_HIGH);
		DIO_voidSetPinValue(PORTC_ID,PIN1,PIN_HIGH);
		DIO_voidSetPinValue(PORTC_ID,PIN2,PIN_HIGH);
		DIO_voidSetPinValue(PORTC_ID,PIN3,PIN_LOW);
		break;
	case 8:
		DIO_voidSetPinValue(PORTC_ID,PIN0,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN1,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN2,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN3,PIN_HIGH);
		break;
	case 9:
		DIO_voidSetPinValue(PORTC_ID,PIN0,PIN_HIGH);
		DIO_voidSetPinValue(PORTC_ID,PIN1,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN2,PIN_LOW);
		DIO_voidSetPinValue(PORTC_ID,PIN3,PIN_HIGH);
		break;


	}


}

