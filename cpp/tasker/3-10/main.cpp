#include <stdio.h>
#include <stdint.h>
#include <iostream>

int return_MSB(uint8_t input);
int main(int argc, char const *argv[])
{
  std::cout << return_MSB(0b00000100);
  return 0;
}

int return_MSB(uint8_t input){
  return input >> 7;
}