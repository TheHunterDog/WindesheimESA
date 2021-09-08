#include <iostream>

void printHelloWorld(int);

int main(int argc, char const *argv[])
{
  int amount = 13;
  printHelloWorld(amount);
  return 0;
}

void printHelloWorld(int amount){
  for (int i = 0; i < amount; i++)
  {
    std::cout << "Hello World\n";
  }
  
}