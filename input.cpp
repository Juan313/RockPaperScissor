/*********************************************
 * Author: Juan Du
 * Date: 2017/02/01
 * Description: utility function that handles
 * input validation
*********************************************/
#include "input.hpp"
#include <iostream>

void readInt(int& number)
{
  int temp;
  std::cin>>temp;
  while (!(std::cin))
  {
    std::cout<<"The number provided is not an integer. Please enter again."<<std::endl;
    std::cin.clear();
    std::cin.ignore(256,'\n');
    std::cin>>temp;
  }
  std::cin.ignore(256,'\n');
  number = temp;
}

void readDouble(double& number)
{
  double temp;
  std::cin>>temp;
  while (!(std::cin))
  {
    std::cout<<"The number provided is not a double. Please enter again."<<std::endl;
    std::cin.clear();
    std::cin.ignore(256,'\n');
    std::cin>>temp;
  }
  std::cin.ignore(256,'\n');
  number = temp;
}
void readString(std::string& s)
{
  std::getline(std::cin,s);
}
void readChar(char& c)
{
  c = std::cin.get();
  std::cin.ignore(256,'\n');
}
