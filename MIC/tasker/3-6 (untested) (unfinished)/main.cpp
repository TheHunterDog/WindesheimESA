#include <avr/interrupt.h>
#include "usart.h"
#include "twi.h"

uint8_t const SUBMAIN = 0x52;

int main(int argc, char const *argv[])
{
  sei();
  twi_init();

  while (1)
  {

  }
  return 0;
}
