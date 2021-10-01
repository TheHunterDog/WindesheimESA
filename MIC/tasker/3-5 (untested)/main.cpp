#include <avr/interrupt.h>
#include "usart.h"
#include <Wire.h>

uint8_t const SUBMAIN = 0x52;

int main(int argc, char const *argv[])
{
  sei();
  Wire.begin();

  while (1)
  {
    uint8_t input = USART_Receive();
    if(~(input & 0)){
      Wire.write(input);
    }
  }
  return 0;
}
