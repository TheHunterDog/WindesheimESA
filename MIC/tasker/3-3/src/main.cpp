// keep intellisense satisfied
#ifndef __AVR_ATmega328P__
#define __AVR_ATmega328P__
#endif
#define BAUD 9600

#include <avr/io.h>
#include <avr/interrupt.h>
#include <HardwareSerial.h>
#include <util/delay.h>
#include <util/setbaud.h>

#include "usart.h"

inline void init_leds();
int convertDecimalTOoctal(int);
bool TestconvertDecimalTOoctal();
bool TestreverseNumber();
int reverseNumber(int);
void transmitInt(uint8_t);

int main()
{
  USART_Init();

  uint8_t counter = 0;
  init_leds();
  if(TestconvertDecimalTOoctal()){
    USART_Transmit('Y');
  }
  else{
        USART_Transmit('N');

  }
  if(TestreverseNumber()){
    USART_Transmit('Y');
  }
  else{
        USART_Transmit('N');

  }
  while (1)
  {
    transmitInt(convertDecimalTOoctal(counter));
    



     PORTD = (counter << 2) | (PORTD & ((1 << DDD1) | (1 << DDD0)));


    if (counter >= 64)
    {
      USART_Transmit('=');

      counter = 0;
    }
    USART_Transmit('^');
    counter++;
    _delay_ms(500);
  }
}

inline void init_leds() {
   // Set pind D7 to D2 as output.
   DDRD = (1 << DDD7) | (1 << DDD6) |
          (1 << DDD5) | (1 << DDD4) |
          (1 << DDD3) | (1 << DDD2) |
          (DDRD & ((1 << DDD1) | (1 << DDD0)));
}
int convertDecimalTOoctal(int number){

  int remain = 0;
  int n = number;
  int octal = 0;
  int level = 1;
  while(n > 0){
    remain = n % 8;
    n /= 8;
    octal += (remain * level);
    level *= 10;
    _delay_ms(300);

    // USART_Transmit(remain + '0');
    // USART_Transmit('o');
    // USART_Transmit(octal + '0');
  }
  // USART_Transmit('+');
  return octal;
}

bool TestconvertDecimalTOoctal(){
    return (convertDecimalTOoctal(7562) == 16612);
}

void transmitInt(uint8_t number){

  number = reverseNumber(number);
  USART_Transmit('-');
  while(number > 0){
    USART_Transmit(number % 10 + '0');
    number /=10;

  }
    USART_Transmit('-');

}
int reverseNumber(int number){
  int newNum = 0;
  int remain = 0;
  int l = 1;
  uint8_t old = 1;

  while (number > 0)
  {
    remain = number % 10;
    USART_Transmit(old+'0');
    USART_Transmit('/');
    newNum += (old * remain);
    number /= 10;
    old *= 10;
    
  }
  return newNum;
}

bool TestreverseNumber(){
  return reverseNumber(251) == 152;
}