#include "Act_1.h"

void port(){
DDRB|=(1<<PB0);

DDRD&=~(1<<PD0);

PORTD|=(1<<PD0);

DDRD&=~(1<<PD1);
PORTD|=(1<<PD1);
}
