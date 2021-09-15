// keep intellisense satisfied
#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif

#include <avr/io.h>
#include <avr/interrupt.h>
#include <HardwareSerial.h>

uint8_t isHoofdletter(uint8_t letter)
{
  return (letter ^ (8<<2)) >> 4; 
}

uint8_t isKleineLetter(uint8_t letter)
{
  return (letter & (8<<2)) >> 4; 
}

int main()
{
  Serial.begin(9600);
  if(isHoofdletter('A'))
    Serial.println("A is een hoofdletter");
  if(!isHoofdletter('b'))
    Serial.println("b is geen hoofdletter");
  if(isKleineLetter('c'))
    Serial.println("c is een kleine letter");
  if(!isKleineLetter('D'))
    Serial.println("D is geen kleine letter");
  Serial.flush();
  while(1) ;
}