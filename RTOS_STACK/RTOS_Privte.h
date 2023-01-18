/*
 * RTOS_Privte.h
 *
 *  Created on: Dec 17, 2022
 *      Author: gerges
 */

#ifndef RTOS_STACK_RTOS_PRIVTE_H_
#define RTOS_STACK_RTOS_PRIVTE_H_

#include"../LIB/LBIT_MATHH.h"
#include"../LIB/LSTD_TYPES.h"

typedef struct
{
	void (*Fun)(void);
	u32 Periodicity;
	//u8 priority;
	u8 first_delay;
	u8 status;

}Task_t;



#endif /* RTOS_STACK_RTOS_PRIVTE_H_ */
