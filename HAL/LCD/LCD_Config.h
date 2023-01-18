/*
 * LDR_Config.h
 *
 *  Created on: ???/???/????
 *      Author: dell
 */

#ifndef HAL_LCD_LCD_CONFIG_H_
#define HAL_LCD_LCD_CONFIG_H_

/*--------------------------------------------------------------------------------------------*/
/*   SELECT MICROCONTROLERS PINS   */
/*--------------------------------------------------------------------------------------------*/
#define LCD_D0_PIN                PD0_PIN
#define LCD_D1_PIN                PD1_PIN
#define LCD_D2_PIN                PD2_PIN
#define LCD_D3_PIN                PD3_PIN
#define LCD_D4_PIN                PA4_PIN
#define LCD_D5_PIN                PA5_PIN
#define LCD_D6_PIN                PA6_PIN
#define LCD_D7_PIN                PA7_PIN
#define LCD_RS_PIN                PA2_PIN
#define LCD_EN_PIN                PA3_PIN

/*--------------------------------------------------------------------------------------------*/
/*   LCD_MODE OPTIONS :  [ _4_BIT_MODE , _8_BIT_MODE ]   */
/*--------------------------------------------------------------------------------------------*/
#define LCD_MODE           _4_BIT_MODE

#endif /* HAL_LCD_LCD_CONFIG_H_ */
