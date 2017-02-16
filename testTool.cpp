/************************************************************
 ** File Name: testTool.cpp
 ** Author 1:
 ** Author 2:
 ** Author 3:
 ** Author 4:
 ** Author 5:
 ** Author 6:
 ** Author 7:
 ** Date: 02/06/2016
 ** CS 162 Group Project | Play Rock Paper, Scissors!!!
 ** File discription: code to test the base and derived 
                        Tool classes
 **************************************************************/

#include <iostream>
#include "Tool.hpp"
#include "RPS.hpp"

int main()
{
    Rock userRock;
    Rock userRock3(3);
    Paper userPaper;
    Paper userPaper3(3);
    Scissors userScissors;
    Scissors userScissors3(3);
    
    //This piece of code shows that the constructors correctly initialize the type and strenght of the
    //class when using the default constructor or the overload constructor
    std::cout << "Type: " << userRock.getType() << "    Strength: " << userRock.getStrength() << std::endl;
    std::cout << "Type: " << userRock3.getType() << "    Strength: " << userRock3.getStrength() << std::endl;
    std::cout << "Type: " << userPaper.getType() << "    Strength: " << userPaper.getStrength() << std::endl;
    std::cout << "Type: " << userPaper3.getType() << "    Strength: " << userPaper3.getStrength() << std::endl;
    std::cout << "Type: " << userScissors.getType() << "    Strength: " << userScissors.getStrength() << std::endl;
    std::cout << "Type: " << userScissors3.getType() << "    Strength: " << userScissors3.getStrength() << std::endl;

    //The code below can be used to test all the matchups and make sure that the strength is temporarily changed
    //based on the type of the player and computer. If the result is 1 the player won. If it is 2 the computer won
    //If it is 3 it was a tie.
    Tool* comp;
    comp = new Paper;
    std::cout << " computer is a " << comp->getType() << " Strength: " << comp->getStrength() << std::endl;
    std::cout << " player is a " << userRock.getType() << " Strength: " << userRock.getStrength() << std::endl;
    std::cout << "Result: " << userRock.fight(comp) << std::endl << std::endl;
    delete comp;
    
    
    comp = new Paper;
    std::cout << " computer is a " << comp->getType() << " Strength: " << comp->getStrength() << std::endl;
    std::cout << " player is a " << userRock3.getType() << " Strength: " << userRock3.getStrength() << std::endl;
    std::cout << "Result: " << userRock3.fight(comp) << std::endl << std::endl;
    delete comp;
    
    return 0;
}
