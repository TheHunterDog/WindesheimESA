#include <iostream>
void optellen(int &s,int a,int b);
int main(int argc, char const *argv[])
{
  int s = 0;
  int a = 1;
  int b = 2;
  optellen(s,a,b);
  return 0;
}

void optellen(int &s,int a,int b){
  s = a+b;
}