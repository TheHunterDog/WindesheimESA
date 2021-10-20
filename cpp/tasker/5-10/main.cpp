#include <iostream>
void shift(uint8_t &c, int n);


int main(int argc, char const *argv[])
{
  uint8_t numberbytes = 0x01;
  std::cout << numberbytes << std::endl;

  shift(numberbytes,1);
  std::cout << numberbytes << std::endl;
  return 0;
}

void shift(uint8_t &c, int n){
  c = (c<<n);
}