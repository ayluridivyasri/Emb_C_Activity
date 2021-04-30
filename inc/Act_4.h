/**
 * @file Act_4.h
 * @author Divya Sri 
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */ 
#ifndef ACT_4_H_INCLUDED
#define ACT_4_H_INCLUDED
#include <avr/io.h>

void USARTInit(uint16_t ubrr);

char ReadChar();//For Reading

void Write(char data);//For writing


#endif //ACT_4_H_INCLUDED