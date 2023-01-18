/*
 * LBIT_MATHH.h
 *
 *  Created on: Dec 17, 2022
 *      Author: Aspire
 */

#ifndef LIB_LBIT_MATHH_H_
#define LIB_LBIT_MATHH_H_

#define SET_BIT(VAR,BIT_NUM)       ((VAR)|=(1<<(BIT_NUM)))           //VAR=VAR|(1<<BIT_NUM)
#define CLR_BIT(VAR,BIT_NUM)       (VAR&=(~(1<<BIT_NUM)))
#define TOGGLE_BIT(VAR,BIT_NUM)    (VAR^=(1<<BIT_NUM))
#define GET_BIT(VAR,BIT_NUM)       ((VAR>>BIT_NUM)&1)

#endif /* LIB_LBIT_MATHH_H_ */
