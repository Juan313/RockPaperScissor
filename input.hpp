/*********************************************
 * Author: Juan Du
 * Date: 2017/02/01
 * Description: utility function that handles
 * input validation
*********************************************/
#ifndef INPUT_HPP
#define INPUT_HPP
#include <string>
#include <sstream>
#include <vector>
int readInt();
void readInt(int&);
void readInt(int& number, int l, int h);
void readDouble(double&); 
void readDouble(double&, double,double); 
void readString(std::string&);
void readChar(char& c);
bool numberOnly(std::string s);
/* reference from stack overflow
  http://stackoverflow.com/questions/236129/split-a-string-in-c/236803#236803
 * */
template<typename Out>
void split(const std::string &s, char delim, Out result); 

std::vector<std::string> split(const std::string &s, char delim); 
#endif
