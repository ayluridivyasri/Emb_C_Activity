/**
 * @file Act_2.h
 * @author Divya Sri 
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */ 
#ifndef ACT_2_H_INCLUDED
#define ACT_2_H_INCLUDED
#include <avr/io.h>

void InitADC();
uint16_t ReadADC(uint8_t ch);


#endif //ACT_2_H_INCLUDED
