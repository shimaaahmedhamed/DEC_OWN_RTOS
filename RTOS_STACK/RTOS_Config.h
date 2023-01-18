/*
 * RTOS_Config.h
 *
 *  Created on: Dec 17, 2022
 *      Author: gerges
 */

#ifndef RTOS_STACK_RTOS_CONFIG_H_
#define RTOS_STACK_RTOS_CONFIG_H_

#include"RTOS_Privte.h"
/* set number of tasks */
#define MAX_TASK 3
/* set Prescaler */
#define RTOS_PRESCALER 1024
/* set FCPU khz */
#define RTOS_FCPU_KHZ  16000
/* set system tick msec */
#define SYSTICK_MS  1


#endif /* RTOS_STACK_RTOS_CONFIG_H_ */
