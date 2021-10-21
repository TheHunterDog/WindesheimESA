#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif
#define DEBOUNCETIME 20

#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>
#include <HardwareSerial.h>
#include <avr/interrupt.h>

enum bstate
{
  waiting,
  passed
};
volatile bstate prev_state = waiting;

ISR(INT0_vect)
{
  prev_state = passed;
}

void display_counter(uint8_t counter);
enum bstate button_state(bstate prev_state);

uint8_t counter = 0;

int main(int argc, char const *argv[])
{

  DDRD &= ~(1 << DDD2);
  PORTD |= (1 << PORTD2);

  DDRC |= (1 << DDC0);
  DDRC |= (1 << DDC1);
  DDRC |= (1 << DDC2);
  DDRC |= (1 << DDC3);

  EIMSK |= (1 << INT0);
  EICRA |= (1 << ISC01);
  sei();

  while (1)
  {

    prev_state = button_state(prev_state);

    if (counter > 15)
    {
      counter = 0;
    }

    display_counter(counter);
  }
  return 0;
}

void display_counter(uint8_t counter)
{
  PORTC = (counter << 0) | (PORTC & ((1 << DDC4) | (1 << DDC5)));
}

enum bstate button_state(enum bstate prev_state)
{
  if (prev_state == passed)
  {
    counter++;
  }
  return waiting;
}