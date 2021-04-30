#include "Act_4.h"

void USARTInit(uint16_t ubrr){
    UBRR0L = ubrr;
    UBRR0H = (ubrr >>8)&0x00ff;
    UCSR0C =(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
    UCSR0B =(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}
char ReadChar(){
    while(!(UCSR0A & (1<<RXC0))){

    }
    return UDR0;
}
void Write(char data){
    while(!(UCSR0A & (1<<UDRE0)))
    {

    }
    UDR0= data;
}