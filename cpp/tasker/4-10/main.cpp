#include <iostream>
int main(int argc, char const *argv[])
{
  int *p1,*p2;
  p1 = new int(13);
  p2 = new int(200);
  std::cout << "P1: "<< p1 << std::endl;
  std::cout << "P2: "<< p2 << std::endl;
  int *p3;
  p3 = p1;
  p1 = p2;
  p2 = p3;
  std::cout << "P1: "<< p1 << std::endl;
  std::cout << "P2: "<< p2 << std::endl;

  return 0;
}
