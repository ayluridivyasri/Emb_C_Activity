/**
 * @file Act_1.h
 * @author Divya Sri 
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */ 
#ifndef ACT_1_H_INCLUDED
#define ACT_1_H_INCLUDED

#include <avr/io.h>
//macro definition

#define LED_ON (PORTB|=(1<<PB0)) //LED_0N
#define LED_OFF (PORTB&=~(1<<PB0)) //LED_OFF
#define  SENSOR_ON ( !(PIND&(1<<PD0)))   //SENSOR_ON
#define  HEATER_ON (!(PIND&(1<<PD1))) //HEATER_ON
void port();
/* 
* this function is to set up the pins
*
*/

#endif  //ACT_1_H_INCLUDED