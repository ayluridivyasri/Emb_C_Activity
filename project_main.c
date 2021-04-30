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
        if(SENSOR_ON){
            if(HEATER_ON)){
                LED_ON;
                temp1=ReadADC(1);
                temp = Pwm(temp1);
                Write(temp);

            }
            else
            {
                LED_OFF;
            }
        }
        else{
            LED_OFF;
        }
         
    }

    return 0;
}


