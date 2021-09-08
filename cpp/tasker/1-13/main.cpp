#include <iostream>

int round(double);
int main()
{
  std::cout<< round(5.221312321);
  return 0;
}

int round(double num){
  return (int) num;
}