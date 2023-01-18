/*
 * SSD_Programe.c
 *
 *  Created on: Dec 17, 2022
 *      Author: osama yassin
 */

/***HAL***/
#include"../../LIB/LBIT_MATHH.h"
#include"../../LIB/LSTD_TYPES.h"

/***MCAL***/
#include "../../MCAL/DIO/DIO_Interface.h"

/***SEVSEG***/
#include "SSD_Interface.h"
#include "SSD_Private.h"
#include "SSD_Config.h"


//static u8 SSD_u8FromU8toSevSeg(u8 copy_u8Num){
//
//	switch(copy_u8Num){
//		case 0:return SSD_NUM_0; break;
//		case 1:return SSD_NUM_1; break;
//		case 2:return SSD_NUM_2; break;
//		case 3:return SSD_NUM_3; break;
//		case 4:return SSD_NUM_4; break;
//		case 5:return SSD_NUM_5; break;
//		case 6:return SSD_NUM_6; break;
//		case 7:return SSD_NUM_7; break;
//		case 8:return SSD_NUM_8; break;
//		case 9:return SSD_NUM_9; break;
//		default:return SSD_NUM_0; break;
//	}
//
//}
void SSD_voidInit(){

	/* Output Number Ports  */
	DIO_voidSetPortDirection(PORTC_REG,PORT_OUTPUT);
//	DIO_voidSetPortDirection(SSD_NUM_PORT_2, PORT_OUTPUT);

	//DIO_voidSetPortValue(SSD_NUM_PORT_1,PORT_HIGH);
	/* Output COM  */
	//DIO_voidSetPinDirection(SSD_COM_PORT, SSD_COM1_PIN,PIN_OUTPUT);
//	DIO_voidSetPinDirection(SSD_COM_PORT, SSD_COM2_PIN,PIN_OUTPUT);

	/* Enable SSD1 and SSD2 */
//	DIO_voidSetPinValue(SSD_COM_PORT,  SSD_COM1_PIN,PIN_HIGH);
//	DIO_voidSetPinValue(SSD_COM_PORT, SSD_COM2_PIN,PIN_HIGH);
}

//void SSD_voidPrintNum_1(u8 copy_u8Num){
//	DIO_voidSetPortValue(SSD_NUM_PORT_1,  SSD_u8FromU8toSevSeg(copy_u8Num));
//}

//void SSD_voidPrintNum_2(u8 copy_u8Num){
//	DIO_voidSetPortValue(SSD_NUM_PORT_2, SSD_u8FromU8toSevSeg(copy_u8Num));
//}


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

