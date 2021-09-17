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
  // BUTTON set as input PORT 9
  DDRB &= ~(1 << DDB1);
  // BUTTON set pull up mode
  PORTB = (1<<PORTB1);
  // LED
  // setup LED as Output
  DDRC |= (1 << DDC5);
  while (1)
  {
    		_delay_ms(500);
// Check if value on port9 is high
    if (PINB & (1<<PINB1))
    {
      // Turn off led
      PORTC &= ~(1 << PORTC5);

      Serial.println("BUTTON DEPRESSED");
    }
    else
    {
      // Turn on LED
      PORTC |= (1 << PORTC5);

      Serial.println("BUTTON PRESSED");
      
    }
  }
}