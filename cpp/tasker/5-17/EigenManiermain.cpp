#include <iostream>
#include <string>

struct bord{
  int x;
  int y;
  bool standard;
  bool inverted;
  uint8_t pattern;
};

bord* maak_bord(int x,int y);
void print_bord(bord &b);
void clear_bord();


int main(int argc, char const *argv[])
{
  bord *b = maak_bord(5,5);
  print_bord(*b);

  return 0;
}

bord* maak_bord(int x,int y){
  return new bord({x,y,true,false});
}

void print_bord(bord &b){
  if(b.standard){
    for (uint8_t i = 0; i < b.y; i++)
    {
      for (uint8_t j = 0; j < b.x; j++)
      {
        if((i%2 == 1 && j%2 == 0) || (i%2 == 0 && j%2 == 1)){
          std::cout << "##";
        }
        else{
          std::cout << "  ";
        }
      }
      std::cout << std::endl;
    }
    
  }
}
void clear_bord(bord &b){
  delete &b;
  b = {0};
}
