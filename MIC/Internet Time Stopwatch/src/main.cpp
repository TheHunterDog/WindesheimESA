// Keep intelisens satisfied
#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif

// Includes
#include <stdint.h>
#include <avr/io.h>
#include <util/delay.h>
#include <HardwareSerial.h>
#include <avr/interrupt.h>

#include "Wire.h"

#define SLAVE 0x38

#define P0 0
#define P1 1
#define P2 2
#define P3 3
#define P4 4
#define P5 5
#define P6 6
#define P7 7

//   P5
// P6   P4
//   P7
// P0   P2
//   P1    P3

// volatile int leds[9][8] = {{P4,P2},{P5,P4,P7,P0,P1},{P5,P4,P7,P2,P1}};
volatile int leds[10] = {
    0 | (1<<P5) | (1<<P4) | (1<<P2) | (1<<P1) | (1<<P0) | (1<<P6),
    0 | ((1 << P4) | (1 << P2)),
    0 | ((1 << P5) | (1 << P4) | (1 << P7) | 1 << P0) | (1 << P1),
    0 | (1 << P5) | (1 << P4) | (1 << P7) | (1 << P2) | (1 << P1),
    0 | (1<<P6) | (1<<P7) | (1<<P4) | (1<<P2),
    0 | (1 << P5) | (1<<P6) | (1<<P7) | (1<<P2) | (1<<P1),
    0 | (1 << P5) | (1<<P6) | (1<<P7) | (1<<P0) | (1<<P1) | (1<<P2),
    0 | (1<<P5) | (1<<P4) | (1<<P2),
    0 | (1<<P7) | (1<<P6)| (1<<P5)| (1<<P4)| (1<<P0)| (1<<P2)| (1<<P1),
    0 | (1<<P5) | (1<<P6)| (1<<P4)| (1<<P7)| (1<<P2)
    };

// volatile int leds[9][] = [[P0,P1]];

//enum for buttonstate
enum bstate { pressed,
              released
};

volatile uint8_t counter;
volatile bstate curr_state = released;

void show_time()
{

  Wire.beginTransmission(SLAVE);
  Wire.write(leds[counter]);
  Wire.endTransmission();
};
// Setup

void setup_timer()
{

  //TODO: centibeat = 0.864 seconden

  TCCR1B |= (1 << CS02) | (1 << CS00) | (1 << WGM02); // 1/1024
  OCR1A = 13500;
  TIMSK1 |= (1 << OCIE1A);
  TCNT1 = 0; // reset
}

ISR(TIMER1_COMPA_vect)
{
  if (curr_state == released)
  {
    counter++;
    if (counter > 9)
    {
      counter = 0;
    }
  }
}

ISR(INT0_vect)
{
  if (curr_state == pressed)
  {
    curr_state = released;
    counter = 0;
  }
  else
  {
    curr_state = pressed;
  }
}

int main()
{
  Wire.begin();
  setup_timer();
  // Setup button input
  DDRD &= ~(1 << DDD2);
  PORTD |= (1 << PORTD2);
  // Setup interrupt for button
  EIMSK |= (1 << INT0);
  EICRA |= (1 << ISC00);

  // enable interrupts
  sei();

  while (1)
  {
    // Constant show time even if unchanged
    show_time();
  }
}