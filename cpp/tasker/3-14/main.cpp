#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <bitset>


int return_MSB(uint8_t input);
int return_bit(uint8_t input, int pos);
uint8_t clear_35(uint8_t input);
uint8_t clear_bits(uint8_t input, int pos_a, int pos_b);
uint8_t conditional_swap(uint8_t input, int pos_a, int pos_b, int pos_c);

int main(int argc, char const *argv[])
{
  std::cout << std::bitset<8>(conditional_swap((0b00000110),3,5,2));
  return 0;
}

int return_MSB(uint8_t input){
  return input >> 7;
}
int return_bit(uint8_t input, int pos){
  return (input & (1<<pos)) >> pos;
}
uint8_t clear_35(uint8_t input){
  return input &= ~(10<<1);
}
uint8_t clear_bits(uint8_t input, int pos_a, int pos_b){
  return (input & ~((1<<pos_a-1) | (1<<pos_b-1)));
}
uint8_t conditional_swap(uint8_t input, int pos_a, int pos_b, int pos_c){
  if(input & (1<<pos_c)){
    input = (input ^ ((1<<pos_a) | (1<<pos_b)));
  }
  return input;
}