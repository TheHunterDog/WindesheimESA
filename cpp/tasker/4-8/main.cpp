#include <iostream>

int main(int argc, char const *argv[])
{
  int a = 123;
  int *p;
  p = &a;
  std::cout<<"A: "<< a << std::endl;
  std::cout<< "P: "<< *p << std::endl;
  *p = 321;
  std::cout<<"A: "<< a << std::endl;

  return 0;
}
