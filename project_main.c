#include "Act_1.h"
#include "Act_2.h"
#include "Act_3.h"
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
port();
IntiADC();
uint16_t temp1;
TCCR1A |=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
TCCR1B |=(1<<WGM12)|(1<<CS11)|(1<<CS10);
DDRB|=(1<<PB1);
    while(1){
        if(!(PIND&(1<<PD0))){
            if(!(PIND&(1<<PD1))){
                PORTB|=(1<<PB0);
            }
            else
            {
                PORTB&=~(1<<PB0);
            }
        }
        else{
            PORTB&=~(1<<PB0);
        }
         temp1=ReadADC(1);
         Pwm(temp1);
    }

    return 0;
}


