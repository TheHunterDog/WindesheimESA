// keep intellisense satisfied
#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <HardwareSerial.h>
#include <util/delay.h>
int main()
{

  Serial.begin(9600);
  // LEDS
  DDRC |= (1 << DDB3) | (1 << DDB2) | (1 << DDB1) | (1 << DDB0);
  Serial.begin(9600);
  // BUTTON set as input PORT 9
  DDRC &= ~(1 << DDC5);
  // BUTTON set pull up mode
  PORTC = (1 << PORTC1);
  while (1)
  {
    if (PINC & (1 << PINC5))
    {
      PORTC &= ~(1 << PORTB3) & ~(1 << PORTB0);
      PORTC |= (1 << PORTB2) | (1<<PORTB1);

    }
    else{
      PORTC &= ~(1 << PORTB2) & ~(1 << PORTB1);
      PORTC |= (1 << PORTB3) | (1<<PORTB0);

    }
  }

