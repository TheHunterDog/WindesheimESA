#include <iostream>
#include <stdio.h>

void swap(int &a, int &b){
  int c = a;
  a = b;
  b = c;
  std::cout << "A:"<< a << std::endl;
  std::cout << "B:"<< b << std::endl;
}
int main(int argc, char const *argv[])
{
  int a = 313;
  int b = 911;
  std::cout << "A:"<< a << std::endl;
  std::cout << "B:"<< b << std::endl;
  swap(a,b);
    std::cout << "A:"<< a << std::endl;
  std::cout << "B:"<< b << std::endl;

  return 0;
}


