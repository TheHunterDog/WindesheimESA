#include <avr/io.h>
#include <util/delay.h>

// keep intellisense satisfied
#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif

int main(void){

	DDRB |= (1<<DDB5);

	while(1){
		PORTB ^= (1<<PORTB5);
		_delay_ms(1000);

	}

	return 0;
}
