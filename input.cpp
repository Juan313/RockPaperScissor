/*********************************************
 * Author: Juan Du
 * Date: 2017/02/01
 * Description: utility function that handles
 * input validation
*********************************************/
#include "input.hpp"
#include <cstdlib> 
#include <iostream>
int readInt()
{
  int num;
  std::cin>>num;
  while (!(std::cin))
  {
    std::cout<<"The number provided is not an integer. Please enter again."<<std::endl;
    std::cin.clear();
    std::cin.ignore(256,'\n');
    std::cin>>num;
  }
  std::cin.ignore(256,'\n');
  return num;
}
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

void readInt(int& number, int l, int h)
{
  int temp;
  std::cin>>temp;
  while (!(std::cin)||temp < l || temp > h)
  {
    if (!(std::cin))
    {
      std::cout<<"The number provided is not a integer. Please enter again."<<std::endl;
    } 
    else 
    {
      std::cout<<"The number provided is not between "<<l<<" and "<<h<<" . Please enter again."<<std::endl;
    }
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
void readDouble(double& number, double l, double h)
{
  double temp;
  std::cin>>temp;
  while (!(std::cin)||temp < l || temp > h)
  {
    if (!(std::cin))
    {
      std::cout<<"The number provided is not a double. Please enter again."<<std::endl;
    } 
    else 
    {
      std::cout<<"The number provided is not between "<<l<<" and "<<h<<" . Please enter again."<<std::endl;
    }
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

bool numberOnly(std::string s)
{
  for (int i = 0; i<(int) s.length(); ++i)
  {
    if (s[i]>'9'|| s[i]<'0')
    return false;
  }
  if (s.length()>0)
  {
    return true;
  } else 
  {
    return false;
  } 

}

/* reference: 
 * http://stackoverflow.com/questions/236129/split-a-string-in-c/236803#236803
 */
template<typename Out>
void split(const std::string &s, char delim, Out result) {
    std::stringstream ss;
    ss.str(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        *(result++) = item;
    }
}

std::vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, std::back_inserter(elems));
    return elems;
}
