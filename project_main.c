#include "Act_1.h"
#include "Act_2.h"
#include "Act_3.h"
#include "Act_4.h"
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
port();
IntiADC();
timer();
uint16_t temp1;
char temp;
USARTInit(103);
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
         temp = Pwm(temp1);
         UARTWrite(temp);

    }

    return 0;
}


