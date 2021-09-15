// keep intellisense satisfied
#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <HardwareSerial.h>

uint8_t toggle_hoofd_klein(uint8_t letter)
{
  uint8_t resultaat = letter;
  resultaat ^= (1 << 5);
  return resultaat;
}

int main()
{
  Serial.begin(9600);

  for(uint8_t i = 'a'; i<= 'z'; i++)
  {
    Serial.print(char(toggle_hoofd_klein(i)));  // druk hoofdletters af
  }
  Serial.println();

  for(uint8_t i = 'A'; i<= 'Z'; i++)
  {
    Serial.print(char(toggle_hoofd_klein(i))); // druk kleine letters af
  }
  Serial.println();

  Serial.flush();

  while(1) ;
}