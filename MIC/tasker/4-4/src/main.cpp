// keep intellisense satisfied
#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <HardwareSerial.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "Wire.h"

#define BUAD 9600
#define P0 0
#define P3 3
#define P7 7
#define SUBMAIN 0x38

volatile int int0_flag = false;

ISR(INT0_vect){
  int0_flag = !int0_flag;
}

int main()
{
  Wire.begin();
  uint8_t base_bits = 0 ;

  Serial.begin(BUAD);
    uint8_t values;

  
  EIMSK |= (1<<INT0);
  EICRA |= (1<<ISC00);


  sei();

        Wire.beginTransmission(SUBMAIN);
      Wire.write(base_bits);
      Wire.endTransmission();
_delay_ms(100);
  // INPUT
    base_bits |= (1 << P0);
// Alert pin
    // base_bits |= (1 << P7);
// Powerpin
    base_bits |= (1 << P3);
        Wire.beginTransmission(SUBMAIN);
      Wire.write(base_bits);
      Wire.endTransmission();
  while (1)
  {
Wire.requestFrom(SUBMAIN, 1);
    uint8_t counter = 0;
    while (Wire.available())
    {
      
      values = Wire.read(); // receive a byte as character
      Serial.println(values);
    } // print the character    }
    if(int0_flag){
      Wire.beginTransmission(SUBMAIN);
      Wire.write(base_bits | (1<<P7));
      Wire.endTransmission();
    }

  }
  
}
