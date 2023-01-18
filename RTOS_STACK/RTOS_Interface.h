/*
 * RTOS_Interface.h
 *
 *  Created on: Dec 17, 2022
 *      Author: gerges
 */

#ifndef RTOS_STACK_RTOS_INTERFACE_H_
#define RTOS_STACK_RTOS_INTERFACE_H_

#include"RTOS_Config.h"

#define RESUME  1
#define SUSPEND 0


/* RTOS Initialization */
void RTOS_VoInit(void);
/* Create Task */
void RTOS_VoCreateTask(void(*PtrToFun)(void),u32 u32Periodicty,u8 u8priority,u8 u8first_delay);
/* Resume Task */
void RTOS_VoTaskResume(u8 u8Priority);
/* Suspend Task */
void RTOS_VoTaskSuspend(u8 u8Priority);
/* Delete Task */
void RTOS_VoTaskDelete(u8 u8Priority);

#endif /* RTOS_STACK_RTOS_INTERFACE_H_ */
