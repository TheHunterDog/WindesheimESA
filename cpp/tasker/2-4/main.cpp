#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

const int BUFFERSIZE = 16;

bool printFile(std::string fileName);
void printFile(std::ifstream &inFile);
void printFileAddNumbers(std::ifstream &inFile);
void printFileReplaceSubstring(std::ifstream &inFile, std::string search, std::string replace);

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
    printFileReplaceSubstring(file,"Lorem","Nee");
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

void printFileReplaceSubstring(std::ifstream &inFile, std::string search, std::string replace)
{
  char cha;
  bool match;
  while (!inFile.eof())
  {
    inFile.get(cha);
    if (cha == search.at(0))
    {
      for (int i = 1; i < search.length(); i++)
      {
        inFile.get(cha);
        if (cha == search.at(i))
        {
          match = true;
        }
        else
        {
          for (int j = 0; j <= i; j++)
          {
            std::cout << search.at(j);
          }
          break;
        }
      }
      std::cout << replace;
    }
    else
    {
      std::cout << cha;
    }
  }
}
