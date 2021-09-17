// keep intellisense satisfied
#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <HardwareSerial.h>
#include <util/delay.h>
const uint8_t PORTNUMBERSIZE = 6;
int main()
{

  Serial.begin(9600);
  // LEDS
  DDRC |= (1 << DDD2) | (1 << DDD3) | (1 << DDD4) | (1 << DDD5) | (1 << DDD6) | (1 << DDD7);
  uint8_t count = 0;
  uint8_t port[PORTNUMBERSIZE] = {PORTD2, PORTD3, PORTD4, PORTD5, PORTD6, PORTD7};
  while (1)
  {
    Serial.println(count);

    for (size_t i = 0; i < PORTNUMBERSIZE; i++)
    {
      if (count & (1 << i))
      {
        PORTD |= (1 << port[i]);
      }
      else
      {
        PORTD &= ~(1 << port[i]);
      }
    }

    if (count == 64)
    {
      count = 0;
    }
    count += 1;
    _delay_ms(500);
  }
}