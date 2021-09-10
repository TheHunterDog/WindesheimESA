#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

const int BUFFERSIZE = 16;

bool printFile(std::string fileName);
void printFile(std::ifstream &inFile);
int main()
{
  if(!printFile("aap.txt")){
    std::cout << "Er is iets mis gegaan";
  }
  return 0;
}

bool printFile(std::string fileName)
{
  std::ifstream file;
  file.open(fileName);
  if (file.is_open())
  {
    // std::streambuf * buf = file.rdbuf();
    // std::cout<< (char) buf->sgetc();
    printFile(file);
    file.close();
    return true;
  }

  return false;
}

void printFile(std::ifstream &inFile)
{
  while (!inFile.eof())
  {
    char cha;
    inFile.get(cha);
    std::cout << cha;
  }
}
