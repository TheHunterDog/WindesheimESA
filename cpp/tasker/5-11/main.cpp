#include <iostream>

struct vec {
  int x;
  int y;
};

void print_vec(const vec &v){
  std::cout << "X: " << v.x << std::endl;
  std::cout << "Y: " << v.y << std::endl;
}

void sum_vec(vec &s, vec *a,vec *b){
  s.x = a->x + b->x;
  s.y = a->y + b->y;
}

void copy_vec(vec &d, vec *s){
  d.x = s->x;
  d.y = s->y;
}
a value of type "int (*)[2]" cannot be used to initialize an entity of type "int (*)[5]"C/C++(144)
int main(int argc, char const *argv[])
{
  vec sum = {0,0};
  vec a = {3,4};
  vec b = {1,2};

  sum_vec(sum,&a,&b);
  print_vec(sum);
  copy_vec(sum,&a);
  print_vec(sum);

  return 0;
}
