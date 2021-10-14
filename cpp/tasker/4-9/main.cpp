#include <iostream>
int main(int argc, char const *argv[])
{
  int a,b,temp;
  a = 33;
  b = 1;
  std::cout<<"A:" << a<<std::endl;
  std::cout<<"B:" << b<<std::endl;

  int *p,*q;
  p = &a;
  q = &temp;
  *q = b;
  // B is stored in temp
  q = &b;
  *q = *p;
  // B is equal to A
  q = &temp;
  *p = *q;
  std::cout<<"A:" << a<<std::endl;
  std::cout<<"B:" << b<<std::endl;

  return 0;
}
