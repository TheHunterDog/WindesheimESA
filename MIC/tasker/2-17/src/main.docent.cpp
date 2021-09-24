// keep intellisense satisfied
#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <HardwareSerial.h>

inline void init_leds();
 
int main() {
  uint8_t counter = 0;
  init_leds();
  while(1) {
     //counter = (counter + 1) % 64;     // count up in mod 64 field
      counter++;
      if (counter >= 64)
           counter = 0;
     PORTD = (counter << 2) | (PORTD & ((1 << DDD1) | (1 << DDD0)));
     
  }
}
 
inline void init_leds() {
   // Set pind D7 to D2 as output.
   DDRD = (1 << DDD7) | (1 << DDD6) |
          (1 << DDD5) | (1 << DDD4) |
          (1 << DDD3) | (1 << DDD2) |
          (DDRD & ((1 << DDD1) | (1 << DDD0)));
}