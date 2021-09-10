#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

const int BUFFERSIZE = 16;

bool printFile(std::string fileName);
void printFile(std::ifstream &inFile);
void printFileAddNumbers(std::ifstream &inFile);

int main()
{
  if (!printFile("test.txt"))
  {
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
    printFileAddNumbers(file);
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

void printFileAddNumbers(std::ifstream &inFile)
{
  while (!inFile.eof())
  {
    char cha;
    inFile.get(cha);
    switch (cha)
    {
    case 'i':
      cha = '1';
      break;
    case 'e':
      cha = '3';
      break;

    case 'o':
      cha = '0';
      break;

    case 's':
      cha = '5';
      break;
    };
      std::cout << cha;
  }
}