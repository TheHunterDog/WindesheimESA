#include <iostream>
bool div(double &d, double a,double b);

int main(int argc, char const *argv[])
{
double d = 0;
double a = 0;
double b = 1;
std::cout<< d;

div(d,a,b);
std::cout<< d;
  return 0;
}

bool div(double &d, double a,double b){
  d = a/b == 0;
  return d;
}