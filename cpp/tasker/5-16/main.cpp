#include <iostream>
#include <string>

char* concat(std::string a,std::string b){
  char* compound = new char[a.size() + b.size()];
  for (int i = 0; i < a.size(); i++)
  {
    compound[i] = a.at(i);
  }
  for (int i = 0; i < b.size(); i++)
  {
    compound[a.size() + i] = b.at(i);
  }
  return compound;
}


int main(int argc, char const *argv[])
{
  char* abc = concat("abc","DEF");
  for (int i = 0; i < 13; i++)
  {
    std::cout<<abc[i]<<std::endl;
  }
  delete[] abc;
  return 0;
}
