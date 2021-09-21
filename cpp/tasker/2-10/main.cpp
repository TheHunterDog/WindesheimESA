#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

const int BUFFERSIZE = 16;

bool printFile(std::string fileName);
void printFile(std::ifstream &inFile);
void printFileAddNumbers(std::ifstream &inFile);
void printFileReplaceSubstring(std::ifstream &inFile, std::string search, std::string replace);
void printFileDigits(std::ifstream &inFile);
void printFileAddDigits(std::ifstream &inFile);
void printFileNumbers(std::ifstream &inFile);
void printFileAddDigits8(std::ifstream &inFile);
int getNextNumber(std::ifstream &inFile);
void printFileAddDigits9(std::ifstream &inFile);
void printFileAddDigits10(std::ifstream &inFile);

float convertDecimal(int num,int decimalplace);
int main()
{
  if (!printFile("test.txt"))
  {
    std::cout << "Er is iets mis gegaan";
  }
  return 0;
}

void printFileAddDigits10(std::ifstream &inFile)
{
  int negative = false;
  float total = 0;
  char cha;
  float mem = 0;
  bool IsDecimal;
  int decimal;
  while (!inFile.eof() && inFile.get(cha) || mem != 0)
  {

    if (cha >= '0' && cha <= '9')
    {
      if (IsDecimal)
      {
        decimal += (int)cha - 48;
      }
      else
      {
        if (mem > 0)
        {
          mem *= 10;
        }
        mem += (int)cha - 48;
        if (mem < -1)
        {
          throw "Overflow error";
        }
      }
    }
    else if (cha == '-')
    {
      negative = !negative;
    }
    else if (cha == ',')
    {
      IsDecimal = true;
    }
    else if (mem > 0)
    {
      if (IsDecimal)
      {
        
        mem += convertDecimal(decimal,1);;
      }
      if (negative)
      {
        mem = -mem;
        negative = false;
      }

      IsDecimal = false;
      total += mem;
      mem = 0;
    }
    cha = ' ';
  }

  std::cout << total;
}

float convertDecimal(int num,int decimalplace){
  float numb = num;
  for (int i = 0; i < decimalplace; i++)
  {
    numb/= 10;
  }
  return numb;
}

void printFileAddDigits9(std::ifstream &inFile)
{
  int negative = false;
  float total = 0;
  char cha;
  float mem = 0;
  while (!inFile.eof() && inFile.get(cha))
  {

    if (cha >= '0' && cha <= '9')
    {

      if (mem > 0)
      {
        mem *= 10;
      }
      mem += (int)cha - 48;
      if (mem < -1)
      {
        throw "Overflow error";
      }
    }
    else if (cha == '-')
    {
      negative = !negative;
    }
    else if (mem > 0)
    {
      if (negative)
      {
        mem = -mem;
        negative = false;
      }

      total += mem;
      mem = 0;
    }
  }
  if (negative)
  {
    mem = -mem;
    negative = false;
  }
  total += mem;
  mem = 0;
  std::cout << total;
}

void printFileAddDigits8(std::ifstream &inFile)
{
  int negative = true;
  int total = 0;
  char cha;
  int mem = 0;
  while (!inFile.eof() && inFile.get(cha))
  {

    if (cha >= '0' && cha <= '9')
    {

      if (mem > 0)
      {
        mem *= 10;
      }
      mem += (int)cha - 48;
      if (mem < -1)
      {
        throw "Overflow error";
      }
    }
    else if (mem > 0)
    {
      total += mem;
      mem = 0;
    }
  }
  total += mem;
  mem = 0;
  std::cout << total;
}

void printFileNumbers(std::ifstream &inFile)
{
  int mem = 0;
  while (!inFile.eof())
  {
    char cha;
    inFile.get(cha);
    if (cha >= '0' && cha <= '9')
    {
      if (mem > 0)
      {
        mem *= 10;
      }

      mem += (int)cha - 48;
      if (mem < -1)
      {
        throw "Overflow error";
      }
    }
    else if (mem > 0)
    {
      std::cout << mem << "\n";
      mem = 0;
    }
  }
  if (mem > 0)
  {
    std::cout << mem << "\n";
    mem = 0;
  }
}

void printFileAddDigits(std::ifstream &inFile)
{
  int total = 0;
  while (!inFile.eof())
  {
    char cha;
    inFile.get(cha);
    if (cha >= '0' && cha <= '9')
    {
      total += ((int)cha - 48);
    }
  }
  std::cout << total;
}

{
  std::ifstream file;
  file.open(fileName);
  if (file.is_open())
  {
    // std::streambuf * buf = file.rdbuf();
    // std::cout<< (char) buf->sgetc();
    printFileAddDigits10(file);
    file.close();
    return true;
  }

  return false;
}

void printFileDigits(std::ifstream &inFile)
{
  while (!inFile.eof())
  {
    char cha;
    inFile.get(cha);
    if (cha >= '0' && cha <= '9')
    {
      std::cout << cha;
    }
  }
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
