#include <iostream>
#include "tentamen.h"
#define BYTES 8
unsigned char dubbelklappen(unsigned char input)
{
  // typ hier je antwoord voor vraag 3:
  input = input >> 4;
  input = input << 4;


unsigned char  a =0;

  for (int i = 0; i < 4; i++)
  {
    a = (input | (input & (1 << (4 + i))) >> (1 + i));
  }

  return a;
}

void freeplay3()
{
  // Hier mag je code typen om dingen uit te proberen.
  // Deze wordt niet beoordeeld.
}

void opgave3_demo_print(unsigned char num)
{
  std::cout << "input = ";
  print_as_HEX(num);
  std::cout << ", student = ";
  print_as_HEX(dubbelklappen(num));
  std::cout << ", docent = ";
  print_as_HEX(docent_check(num));
  std::cout << std::endl;
}

void opdracht3_demo()
{
  std::cout << "Opgave 3: Demo" << std::endl;
  for (unsigned char i = 0x00; i < 0x0B; i++)
  {
    opgave3_demo_print(i * 23);
  }
}

void opdracht3()
{
  std::cout << std::endl
            << "Opdracht 3" << std::endl;
  freeplay3();
opgave3_demo_print(26);  // je mag de volgende functie in en uit commentaar zetten voor een demo van alle voorbeelden:
  //opdracht3_demo();
}

unsigned char docent_check(unsigned char input)
{
  int a = (int)(input);
  int b = a * 2;
  int c = a / 16;
  int d = a + b * 4;
  int e = c * 16;
  int f = d - a;
  int g = c % 2;
  int h = g * 4;
  e += g * 8;
  int i = c % 4 - g;
  e += i * 2;
  int j = c * 4;
  g += i;
  int k = c % 8 - g;
  e += k / 2;
  int l = j * 2;
  g += k;
  int m = c % 16 - g;
  int n = e % 4;
  e += m / 8;
  return e;
}

void print_HEX_digit(int digit)
{
  if (digit < 10)
    std::cout << digit;
  else
    std::cout << (char)('A' + (digit - 10));
}

void print_as_HEX(const unsigned char input)
{
  std::cout << "0x";
  print_HEX_digit(input / 16);
  print_HEX_digit(input % 16);
}
