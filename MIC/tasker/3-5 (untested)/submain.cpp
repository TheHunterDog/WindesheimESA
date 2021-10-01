#include <avr/interrupt.h>
#include <Wire.h>
#include <HardwareSerial.h>

uint8_t const SUBMAIN = 0x52;

int main(int argc, char const *argv[])
{
  Serial.begin(9600);
  Wire.begin(SUBMAIN);
  sei();

  while (1)
  {
    uint8_t data;
    Wire.read();
    if(~(data & 0)){
      Serial.println(data);
    }
  }
  return 0;
}
