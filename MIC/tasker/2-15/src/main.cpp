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
  // BUTTON
  DDRB &= ~(1 << DDB1);
  PORTB = (1<<PORTB1);
  // LED
  DDRC |= (1 << DDC5);
  while (1)
  {
    		_delay_ms(500);

    Serial.print(PORTB  & (1<<PORTB1));
    Serial.print((!(~(PORTB | ~((1 << PORTB1))))));

    Serial.print(PINB & (1<<PINB1) == 0);
    Serial.print(!(PINB & (1<<PINB1)));
    Serial.print(PINB & (1<<PINB1));
    Serial.print(PINB & (1<<PINB1) == (1<<PINB1));
    Serial.print(!(PINB & (1<<PORTB1)));
    Serial.print(PINB & (1<<PINB1));
    if (PINB & (1<<PINB1))
    {
      PORTC ^= (1 << PORTC5);
      Serial.println("BUTTON PRESSED");
    }
    else
    {
      PORTC &= ~(1 << PORTC5);
      Serial.println("BUTTON DEPRESSED");

    }
  }
}