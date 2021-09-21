#include <stdint.h>
#include <stdio.h>
#include <iostream>
#include <bitset>
uint8_t getbits(uint32_t board, int index);
void print_generation(uint32_t generation);
uint32_t cycle(uint32_t generation, int &cycle, uint8_t ruleset);
int main(int argc, char const *argv[])
{
  int genNumber = 0;
  uint32_t generation = 0b0010110011110100000;
  uint8_t ruleset = 0b01101000;
  for (size_t i = 0; i < 30; i++)
  {
    print_generation(generation);
    generation = cycle(generation, genNumber, ruleset);
  }

  return 0;
}
uint8_t getbits(uint32_t board, int index)
{
  // std::cout << std::bitset<32>(board) << "\n";
  // std::cout << std::bitset<8>( ((board >> index -1) << 5)) << "\n";

  return ((board >> index - 1) << 5);
}
bool isAlive(uint8_t bitSection, uint8_t ruleset)
{
  bitSection = bitSection >> 5;
  // std::cout << std::bitset<8>(bitSection) << "\n";
  if (bitSection & ((1 << 0)) && bitSection & ((1 << 1)) && bitSection & ((1 << 2)))
  {
    return ruleset & (1 << 7);
  }

  if (bitSection & ((1 << 0)))
  {
    if (bitSection & ((1 << 1)))
    {
      return ruleset & (1 << 3);
    }

    if (bitSection & ((1 << 2)))
    {
      return ruleset & (1 << 5);
    }

    return ruleset & (1 << 1);
  }

  if (bitSection & ((1 << 1)))
  {
    if (bitSection & ((1 << 2)))
    {
      return ruleset & (1 << 6);
    }
    return ruleset & (1 << 2);
  }
  if (bitSection & (1 << 2))
  {
    return ruleset & (1 << 4);
  }
  return ruleset & (1 << 0);
}
void print_generation(uint32_t generation)
{
  for (size_t i = 0; i < 32; i++)
  {
    if (!(~(generation | ~(1 << i))))
    {
      std::cout << "*";
    }
    else
    {
      std::cout << "#";
    }
  }
  std::cout << "\n";
}
uint32_t cycle(uint32_t generation, int &cycle, uint8_t ruleset)
{
  uint32_t newgeneration = 0;
  for (size_t i = 0; i < 32; i++)
  {
    bool alive = false;
    // std::cout << "looking to bit " << i << "\n";
    alive = isAlive(getbits(generation, i), ruleset);
      if (alive)
      {
        newgeneration |= (1 << i);
        // std::cout << "BIT" << i << "IS ALIVE\n";
      }
      else
      {
        newgeneration &= ~(1 << i);
        // std::cout << "BIT" << i << "IS DEAD\n";
      }
    // getbits(generation,i);
  }
  cycle++;
  return newgeneration;
}