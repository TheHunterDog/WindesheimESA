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
    Serial.println('x');
    Serial.flush(); 
  }

int main()
{
  Serial.begin(BUAD);
  DDRB |= (1 << DDB5);
  DDRD |= (1 << DDD2);

  DDRD &= ~(1 << DDD3);
  PORTD |= (1 << PORTD3);

  EIMSK |= (1<<INT0);
  // EIMSK |= (1<<INT1);
  EICRA |= (1<<ISC01);

  sei();

  PORTD |= (1<<PORTD2);
  while (1)
  {
    PORTB ^= (1<<PORTB5); 
    _delay_ms(2000);
  }
  
}
