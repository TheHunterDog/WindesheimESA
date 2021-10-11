#include <avr/interrupt.h>
// #include <twi.h>
#include <HardwareSerial.h>
#include "Wire.h"
#include <util/delay.h>

// Difine submain aka (slave)
// Source: https://www.ti.com/lit/ml/scyb031/scyb031.pdf?ts=1633727878185&ref_url=https%253A%252F%252Fwww.google.nl%252F
#define SUBMAIN 0x38

int main(int argc, char const *argv[])
{
  Serial.begin(9600);
  // Setup wire for i2c communication
  Wire.begin();
  // Enable interrupts for no reason
  sei();
  uint8_t values;
  uint8_t current;
  while (1)
  {
    // send message to portextender
    Wire.beginTransmission(SUBMAIN);
    // write 1 that means that P0 is hight
    // Source: https://www.ti.com/lit/ds/symlink/pcf8574.pdf?ts=1633674855647&ref_url=https%253A%252F%252Fwww.google.com%252F
    // Chapter 8.3.2
    current = (0xFF & ~((1<<0x00) | (1<<0x01)));
    Wire.write(current);
    // ending transmission so it can be send
    Wire.endTransmission();

    Wire.requestFrom(SUBMAIN, 1);
    uint8_t counter = 0;
    while (Wire.available())
    {
      
      values = Wire.read(); // receive a byte as character
      Serial.println(values);
    } // print the character    }
    // Serial.println(values);
      current |= (1<<0x00);
      Wire.beginTransmission(SUBMAIN);
      Wire.write(current);
      Wire.endTransmission();

    if (~(values | ~(1<<0x04)))
    {
      current |= (1<<0x01);

      Wire.beginTransmission(SUBMAIN);
      Wire.write(current);
      Wire.endTransmission();
      Serial.println("LOW");
      Serial.flush();
    }
    else
    {
      Serial.println("High");
      Serial.flush();
    }

    _delay_ms(500);

    Wire.beginTransmission(SUBMAIN);
    // write 1 that means that P0 is hight
    // Source: https://www.ti.com/lit/ds/symlink/pcf8574.pdf?ts=1633674855647&ref_url=https%253A%252F%252Fwww.google.com%252F
    // Chapter 8.3.2
    current &= ~((1<<0x00) | (1<<0x01));
    Wire.write(current);
    // ending transmission so it can be send
    Wire.endTransmission();
    _delay_ms(500);
  }
  return 0;
}
