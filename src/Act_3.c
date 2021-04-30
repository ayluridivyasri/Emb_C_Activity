#include "Act_3.h"

void timer(){  
    //pin B1 is OC1A
TCCR1A |=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
TCCR1B |=(1<<WGM12)|(1<<CS11)|(1<<CS10);
DDRB|=(1<<PB1);
}
char Pwm(uint16_t temp1){ //Writing conditions
char temperature;
        if(temp1>0 && temp1<=200){
            OCR1A=205;//20% of duty cycle
             temperature=20;

             _delay_ms(100);
        }
        else if(temp1>=210 && temp1<=500){
            OCR1A=410;//40% of duty cycle
               temperature=25;
             _delay_ms(100);
        }
        else if(temp1>=510 && temp1<=700){
            OCR1A=717;//70% of duty cycle
             temperature=29;
             _delay_ms(100);
        }
        else if(temp1>=710 && temp1<=1024){
            OCR1A=973;//95 of duty cycle
                    temperature=33;
             _delay_ms(100);
        }
        else{
                OCR1A=0;
             temperature=0;
                _delay_ms(100);// delay function
        }
return temperature;

}
