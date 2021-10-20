#include <iostream>
#include <string>

int** driehoek(int n){
  int** bord = 0;
  n+=1;
  bord = new int*[n];

  for (int i = 0; i < n; i++)
  {
    bord[i] = new int[i];
    bord[0][0] = 1;
    for (int j = 0; j < i; j++)
    {
      bord[i][j] = bord[i-1][j-1] + bord[i-1][j];
    }
  }
  return bord; 
}
void print_bord(int** bord, int n){
  n+=1;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < i; j++)
      {
        std::cout<<" "<<bord[i][j]<<" ";
      }
      std::cout<<std::endl;
    }
}
int** clear_bord(int** bord,int n){
  n+=1;

  for (int i = 0; i < n; i++)
  {
    delete bord[i];
  }
  delete bord;
  bord = NULL;
  return bord;
}


int main(int argc, char const *argv[])
{
  int** drie = driehoek(6);
  print_bord(drie,6);
  drie = clear_bord(drie,6);
  return 0;
}