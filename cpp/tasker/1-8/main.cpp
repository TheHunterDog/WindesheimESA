#include <iostream>
void vierkant(int);
void driehoek(int);
void driehoekInvert(int);
int main(int argc, char const *argv[])
{
  int amount = 4;
driehoek(amount);
  return 0;
}

void vierkant(int amount)
{

  for (int i = 0; i < amount; i++)
  {
    std::cout << "\n";
    for (int i = 0; i < amount; i++)
    {
      std::cout << "*";
    }
  }
}

void driehoekInvert(int max)
{
  for (int i = 0; i < max; i++)
  {
    std::cout << "\n";
    for (int j = i; j < max; j++)
    {
      std::cout << "*";
    }
  }
}
void driehoek(int max)
{
  for (int i = 0; i <= max; i++)
  {
    std::cout << "\n";
    for (int j = 0; j < i; j++)
    {
      std::cout << "*";
    }
  }
}