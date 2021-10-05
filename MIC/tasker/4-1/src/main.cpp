// keep intellisense satisfied
#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <HardwareSerial.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define BUAD 9600

  ISR(INT0_vect){
     PORTB ^= (1<<PORTB5); 
  }

int main()
{
  DDRD &= ~(1 << DDD3);
  PORTD |= (1 << PORTD3);

  DDRB |= (1 << DDB4);
  DDRB |= (1 << DDB5);

  EIMSK |= (1<<INT0);
  EICRA |= (1<<ISC01);

  sei();

  while (1)
  {
    
  }
  
}
