/************************************************************
 ** File Name: menu.cpp
 ** Author 1: Nathaniel Bennet
 ** Author 2: Aaron Berns
 ** Author 3: Juan Du
 ** Author 4: Christopher Dubbs
 ** Author 5: Chieko Duncans
 ** Author 6: Molly Johnson
 ** Author 7: Armand Reitz
 ** Date: 02/17/2016
 ** CS 162 Group Project | Play Rock Paper, Scissors!!!
 ** File discription: Rock, Paper, and Scissor class implementation file
 ** Reference 1: Textbook "C++ Early Objects 8th edition"
 **              written by Tony Gaddis, Judy Walters, and Godfrey Mudganda
 ** Reference 2: 
 ** Reference 3: 
 **************************************************************/

#include "menu.hpp"
#include "input.hpp"
#include <iostream>
#include <string>


char Menu::customizeStrength()
{
  char choice;
  std::cout << "\033[2J\033[1;1H";
  std::cout<<"Welcome to Rock, Paper, Scissors! Do you want to choose different strengths for the tools?"<<std::endl;
  std::cout<<"(y - yes, n - no)";
  readChar(choice);
  while (choice!= 'y' && choice!='n')
  {
    std::cout<<"Please only enter 'y' or 'n' for input."<<std::endl;
    readChar(choice);
  }
  return choice;
}

void Menu::getStrength(int& hr, int& hp, int& hs, int& cr, int& cp, int& cs)
{
  std::cout<<"Please enter strength for human tools:"<<std::endl;
  std::cout<<"Rock: ";
  hr = readInt();
  std::cout<<"Paper: ";
  hp = readInt();
  std::cout<<"Scissor: ";
  hs = readInt();
  std::cout<<"Please enter strength for computer tools:"<<std::endl;
  std::cout<<"Rock: ";
  cr = readInt();
  std::cout<<"Paper: ";
  cp = readInt();
  std::cout<<"Scissor: ";
  cs = readInt();
}

char Menu::getChoice()
{
  char choice;
  std::cout<<"Choose your tool(r - rock, p - paper, s - scissor, e - exit): ";
  readChar(choice);
  while (choice!= 'r' && choice!='p' && choice!='s' && choice !='e')
  {
    std::cout<<"Choose your tool(r - rock, p - paper, s - scissor, e - exit): ";
    readChar(choice);
  }
  return choice;
}
