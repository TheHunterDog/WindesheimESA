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

bool lights = false;


  ISR(PCINT0_vect){
    volatile static uint8_t prev_pind;
    uint8_t cur_pind, diff_pind;

    cur_pind = PINB;
    diff_pind = cur_pind ^ prev_pind;
    prev_pind = cur_pind;
    if(diff_pind & ((1<<PINB0) | (1<<PINB2) | (1<<PINB3))){
      PORTB |= (1<<PORTB5);
    }
    else{
      PORTB &= ~(1<<PORTB5);
    }
  }


int main()
{
  Serial.begin(BUAD);
  // leds
  DDRB |= (1 << DDB5);

  // input
  // B0
  DDRB &= ~(1 << DDB0);
  PORTB |= (1 << DDB0);
// B2
  DDRB &= ~(1 << DDB2);
  PORTB |= (1 << PORTB2);
  //B3
  DDRB &= ~(1 << DDB3);
  PORTB |= (1 << PORTB3);
  PCICR |= (1<<PCIE0);
  PCMSK0 |= ((1 << PCINT0) | (1 << PCINT2) | (1 << PCINT3) | (1<< PCINT4));

  // EIMSK |= ((1<<PCINT0));
  // EIMSK |= (1<<INT1);
  // EICRA |= (1<<ISC01);

  sei();
  while (1)
  {
  }
  
}
