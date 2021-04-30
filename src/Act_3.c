#include "Act_3.h"

void Pwm(uint16_t temp1){
        if(temp1>=0 && temp1<=200){
            OCR1A=205;//20% of duty cycle
             _delay_ms(100);
        }
        else if(temp1>=210 && temp1<=500){
            OCR1A=410;//40% of duty cycle
             _delay_ms(100);
        }
        else if(temp1>=510 && temp1<=700){
            OCR1A=717;//70% of duty cycle
             _delay_ms(100);
        }
        else if(temp1>=710 && temp1<=1024){
            OCR1A=973;//95 of duty cycle
             _delay_ms(100);
        }
        else{
                OCR1A=0;
                _delay_ms(100);// delay
        }

}