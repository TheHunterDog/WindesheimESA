#include <stdint.h>
#include <stdio.h>
#include <iostream>
#include <bitset>

const uint8_t RULESET = 0b01101000;
const uint64_t GAME = 0b0000111000;
const uint8_t MASK = 1;

uint8_t getbits(uint64_t game, int index);
bool isAlive(uint8_t bits, uint8_t ruleset);
int main(int argc, char const *argv[])
{
  int generation = 0;
  uint64_t currentgame = GAME;
  isAlive(getbits(currentgame, 3), RULESET);

  return 0;
}

uint8_t getbits(uint64_t game, int index)
{
  return (game >> (index - 1));
}

bool isAlive(uint8_t bits, uint8_t ruleset)
{
  std::cout << std::bitset<8>(bits) << "\n"
            << std::bitset<8>(ruleset) << "\n";
  std::cout << std::bitset<8>((1 << 3)) << "\n"
            << std::bitset<8>(ruleset) << "\n";

  if (bits & ((1 << 3)))
  {
    if (bits & (1 << 2))
    {
      if (bits & (1 << 1))
      {
      }
      else{
        
      }
    }
    if (bits & (1 << 1))
    {
    }
  }

  return false;
}