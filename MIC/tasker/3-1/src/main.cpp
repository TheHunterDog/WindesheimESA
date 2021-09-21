// keep intellisense satisfied
#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <HardwareSerial.h>
#include <util/delay.h>

#define BUAD 9600


int main()
{

  Serial.begin(9600);
  // LEDS
  sei();
  DDRC |= (1 << DDB5) | (1 << DDB4) ;
  while(1){
      PORTB |= (1 << PORTB5) | (1<<PORTB4);
  }

  }
  // N als param is een hele duidelijke
  // Bron tasker TIP
// void clock_toggle(uint8_t n){
// _delay_ms(n*BUAD)
// }
