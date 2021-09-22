#include <stdio.h>
#include <stdint.h>
#include <iostream>

int return_MSB(uint8_t input);
int return_bit(uint8_t input, int pos);
int main(int argc, char const *argv[])
{
  std::cout << return_bit(0b00000010,1);
  return 0;
}

int return_MSB(uint8_t input){
  return input >> 7;
}
int return_bit(uint8_t input, int pos){
  return (input & (1<<pos)) >> pos;
}