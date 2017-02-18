#include "menu.hpp"
#include "input.hpp"
// #include "RPSGame.hpp"
#include <iostream> 

int main()
{
// human tool choice
  char humanChoice; 
// computer tool choice
  char computerChoice; 

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
 //   GPSGame game(hr,hp,hs,cr,cp,cs);
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
    // GPSGame game(1,1,1,1,1,1);
    std::cout<<"initialized game with all tools strength equal to 1"<<std::endl;
  }

  humanChoice = Menu::getChoice();
  while (humanChoice != 'e') 
  {
    // need to interface with RPSGame 
    std::cout<<"Getting computer choice......"<<std::endl;
    // computerChoice = game.ComputerChoice();
    // need to interface with RPSGame 
    int result = 1;
//    int result = game.play(humanceChoice,computerChoice);
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
    std::cout<<"Human wins: "<< 1 <<std::endl; 
    std::cout<<"Computer wins: "<< 2 <<std::endl; 
    std::cout<<"Ties: "<< 3 <<std::endl; 
    humanChoice = Menu::getChoice();
    
  }
  std::cout<<"Thanks for playing. Goodbye! "<<std::endl;
  
  

  return 0;
}
