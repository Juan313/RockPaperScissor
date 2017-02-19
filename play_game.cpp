/************************************************************
 ** File Name: play_game.cpp
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
 **************************************************************/
#include "menu.hpp"
#include "input.hpp"
#include "RPSGame.hpp"
#include <iostream> 

std::string getFullName(char c);

int main()
{
// human tool choice
  char humanChoice; 
// computer tool choice
  char computerChoice; 
  RPSGame* game;
/*******************************
   hr: human rock strength
   hp: human paper strength
   hs: human scissor strength
   cr: computer rock strength
   cp: computer paper strength
   cs: computer scissor strength
**********************************************************/
  int hr,hp,hs,cr,cp,cs;

  // 'n' if the strength for all the tools are 1; 'y' if use customized strength 
  char strengthChoice = Menu::customizeStrength();

  if (strengthChoice =='y')
  {
    // initialized game with all customized strength 
    Menu::getStrength(hr,hp,hs,cr,cp,cs);
    game = new RPSGame(hr,hp,hs,cr,cp,cs);
    std::cout<<"initialized game with customized strength "<<std::endl;
    
    std::cout<<"human rock strength is "<<hr <<std::endl;
    std::cout<<"human paper strength is "<<hp <<std::endl;
    std::cout<<"human scissor strength is "<<hs <<std::endl;
    std::cout<<"computer rock strength is "<<cr <<std::endl;
    std::cout<<"computer paper strength is "<<cp <<std::endl;
    std::cout<<"computer scissor strength is "<<cs <<std::endl;
  }
  else 
  {
    // initialized game with all tools strength equal to 1
    game = new RPSGame(1,1,1,1,1,1);
    std::cout<<"initialized game with all tools strength equal to 1"<<std::endl;
  }

  humanChoice = Menu::getChoice();
  while (humanChoice != 'e') 
  {
    std::string toolName;
    computerChoice = game->computerChoice();
    toolName = getFullName(computerChoice);
    std::cout<<"Computer chose "<<toolName<<std::endl;
    int result = game->play(humanChoice, computerChoice);
    //std::cout << "RESULT: " << result << std::endl;
    if (result == 1) 
    { 
      std::cout<<"Human wins!"<<std::endl; 
    }
    if (result == 2) 
    { 
      std::cout<<"Computer wins!"<<std::endl; 
    }
    if (result == 3) 
    { 
      std::cout<<"It's a tie!"<<std::endl; 
    }
    // display score so far. Need to interface with RPSGame
    game->print_stats();
    humanChoice = Menu::getChoice();
    
  }
  std::cout<<"Thanks for playing. Goodbye! "<<std::endl;
  delete game;
  return 0;
}
std::string getFullName(char c)
{
  std::string name;
  switch (c)
  {
    case 'r': name = "rock";
              break;
    case 'p': name = "paper";
              break;
    case 's': name =  "scissor";
              break;
  }
  return name;

}

