#include <avr/interrupt.h>
// #include <twi.h>
#include "Wire.h"
#include <util/delay.h>
// Difine submain aka (slave)
// Source: https://www.ti.com/lit/ml/scyb031/scyb031.pdf?ts=1633727878185&ref_url=https%253A%252F%252Fwww.google.nl%252F
#define SUBMAIN 0x38

int main(int argc, char const *argv[])
{
  // Setup wire for i2c communication
  Wire.begin();
  // Enable interrupts for no reason
  sei();
  while (1)
  {
    // send message to portextender 
    Wire.beginTransmission(SUBMAIN);
    // write 1 that means that P0 is hight
    // Source: https://www.ti.com/lit/ds/symlink/pcf8574.pdf?ts=1633674855647&ref_url=https%253A%252F%252Fwww.google.com%252F
    // Chapter 8.3.2
    Wire.write(0b00001001);
    // ending transmission so it can be send
    Wire.endTransmission();
    _delay_ms(200);
    Wire.beginTransmission(SUBMAIN);
    // make everything low
    Wire.write(0);
    Wire.endTransmission();
    _delay_ms(200);
  }
  return 0;
}
