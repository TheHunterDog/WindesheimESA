#include <iostream>

struct ding
{
  int i;
  int *p;
};

void print_ding(ding *a){
  std::cout << "I: "<< a->i << std::endl;
  std::cout << "P: "<< a->p << std::endl;
}

void omhoog(ding *a){
  a->i++;
  a->p++;
}

int main(int argc, char const *argv[])
{
  ding *x = new ding();
  x->i = 1;
  x->p = new int(2);
  print_ding(x);
  ding *p_ding = x;
  p_ding->i = 33;
  print_ding(x);
  omhoog(x);
  print_ding(x);
  return 0;
}

