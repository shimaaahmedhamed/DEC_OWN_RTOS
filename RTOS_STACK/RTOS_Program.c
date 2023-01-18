/*
 * RTOS_Program.c
 *
 *  Created on: Dec 17, 2022
 *      Author: gerges
 */
#include"RTOS_Interface.h"
#include"../MCAL/MGIE/MGIE_Interface.h"
#include"../MCAL/TIMER/TIMER_Interface.h"
#include"../MCAL/MDIO/MDIO_Interface.h"


Task_t SysTasks[MAX_TASK] = {    {NULL,0,0,0}     };              //DEFINE FIRST ELEMENT IN ARRAY WITH NULL WHICH IS FIRST TASK

static void VidScheduler(void);

/* RTOS Initialization */
void RTOS_VoInit(void)
{
	u32 Loc_u32CTCValue;
	/* Set Timer CallBack */
	TIMER0_VidCTC_SetCallBack(VidScheduler);
	/* Set CTC Value */
	Loc_u32CTCValue= ((SYSTICK_MS*RTOS_FCPU_KHZ)/RTOS_PRESCALER);
	TIMER0_VidSetCTCValue(Loc_u32CTCValue);
	/* Timer Init */
	TIMER0_VidInit();
	/* GIE Init */
	MGIE_VidEnable();
}
/* Create Task */
void RTOS_VoCreateTask(void(*PtrToFun)(void),u32 u32Periodicty,u8 u8Priority,u8 u8first_delay)
{
	if(SysTasks[u8Priority].Fun==NULL)
	{
	SysTasks[u8Priority].Fun=PtrToFun;
	SysTasks[u8Priority].Periodicity=u32Periodicty;
	SysTasks[u8Priority].first_delay=u8first_delay;
	SysTasks[u8Priority].status=RESUME;
	}
}
/* select whose task is ready */
static void VidScheduler(void)
{
static u32 local_count_systick_count=0;
local_count_systick_count++;
for(u8 local_count=0;local_count<MAX_TASK;local_count++)
{
	if((SysTasks[local_count].status=RESUME) && (SysTasks[local_count].Fun) != NULL)
	{
		if(SysTasks[local_count].first_delay==0)

	    {
		SysTasks[local_count].first_delay=SysTasks[local_count].Periodicity-1;
		SysTasks[local_count].Fun();
	    }
	    else
     	{

		SysTasks[local_count].first_delay--;

	    }
	}

	else
	{
		/*DO NOTHING */
	}

}
}
void RTOS_VoTaskResume(u8 u8Priority)
{

	SysTasks[u8Priority].status=RESUME;

}
void RTOS_VoTaskSuspend(u8 u8Priority)
{
	SysTasks[u8Priority].status=SUSPEND;

}
void RTOS_VoTaskDelete(u8 u8Priority)
{

	SysTasks[u8Priority].Fun=NULL;

}
