// keep intellisense satisfied
#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif


#include <avr/io.h>
#include <avr/interrupt.h>
#include <HardwareSerial.h>
#include <util/delay.h>

int main(void)
{

  	DDRB |= (1<<DDB0); 


  // Clock without prescaler
  TCCR0B |= (1 << CS00);
  // enable timer 0
  TCNT0 = 0;
  // counter
  uint8_t counter = 0;
        PORTB |= (1<<PORTB0);


  while (1)
  {
    if(TIFR0 & (1 << TOV0)){
      counter++;
    }

    // 255 = 1 sec
// Calculation 255/1 * 0.880
// Calculation probly wrong
    if(counter == 224){
      counter = 0;
		  PORTB ^= (1<<PORTB0);
    }


  }
}