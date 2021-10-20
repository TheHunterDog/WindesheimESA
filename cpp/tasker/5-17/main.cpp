#include <iostream>
#include <string>

int** maak_bord(const int n){
  int** bord = 0;
  bord = new int*[n];

  for (size_t i = 0; i < n; i++)
  {
    bord[i] = new int[n];
    for (size_t j = 0; j < n; j++)
    {
      bord[i][j] = (i%2 == 0 && j%2 == 1 || (i%2 == 1 && j%2==0));
      // bord[i][j] = 1;
    }
  }
  return bord; 
}
void print_bord(int** bord, int n){
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {


        if(bord[i][j]){
          std::cout<<"##";
        }
        else{
          std::cout<<"  ";
        }
      }
      std::cout<<std::endl;
    }
}
int** clear_bord(int** bord,int n){
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
  int** bord = maak_bord(5);
  print_bord(bord,5);
  bord = clear_bord(bord,5);
  return 0;
}