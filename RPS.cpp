/************************************************************
 ** File Name: RPS.cpp
 ** Author 1: Nathaniel Bennet
 ** Author 2: Aaron Berns
 ** Author 3: Juan Du
 ** Author 4: Christopher Dubbs
 ** Author 5: Chieko Duncans
 ** Author 6: Molly Johnson
 ** Author 7: Armand Reitz
 ** Date: 02/06/2016
 ** CS 162 Group Project | Play Rock Paper, Scissors!!!
 ** File discription: Rock, Paper, and Scissor class implementation file
 ** Reference 1: Textbook "C++ Early Objects 8th edition"
 **              written by Tony Gaddis, Judy Walters, and Godfrey Mudganda
 ** Reference 2: 
 ** Reference 3: 
 **************************************************************/

#include <iostream>
#include "Tool.hpp"
#include "RPS.hpp"


/*************************************************************
 * Rock class implementation
 * **********************************************************/

//Default constructor that initializes the tools strength
//to 1
Rock::Rock() : Tool(1,'r')
{
}

//Overload constructor that initializes the tools strength
//based on the argument it is passed.
Rock::Rock(int rStrength) : Tool(rStrength,'r')
{
}

//Override of fight function
int Rock::fight(Tool *comp)
{
	int result;
	//Checks the type used by the computer, adjusts strength
	//accordingly and then stores the difference between
	//player and computer strenght in result.
	if(comp->getType()=='p')
	{
		result = this->getStrength() - 2*comp->getStrength();
	}
	else if(comp->getType()=='s')
	{
                result = 2*this->getStrength() - comp->getStrength();
        }
	else
	{
		result = this->getStrength() - comp->getStrength();
	}
	
	//Checks the value stored in result and changes its value to 
	//1,2,or 3 if the player won, lost, or tied respectivey
	if(result<0)
	result = 2;
	else if(result>0)
	result = 1;
	else
	result = 3;

	return result;
}

/*************************************************************
 * Paper class implementation
 * **********************************************************/

//Default constructor that initializes the tools strength
//to 1
Paper::Paper() : Tool(1,'p')
{
}

//Overload constructor that initializes the tools strength
//based on the argument it is passed.
Paper::Paper(int pStrength) : Tool(pStrength,'p')
{
}

//Override of fight function
int Paper::fight(Tool *comp)
{
    int result;
    //Checks the type used by the computer, adjusts strength
    //accordingly and then stores the difference between
    //player and computer strenght in result.
    if(comp->getType()=='s')
    {
        result = this->getStrength() - 2*comp->getStrength();
    }
    else if(comp->getType()=='r')
    {
        result = 2*this->getStrength() - comp->getStrength();
    }
    else
    {
        result = this->getStrength() - comp->getStrength();
    }
    
    //Checks the value stored in result and changes its value to
    //1,2,or 3 if the player won, lost, or tied respectivey
    if(result<0)
        result = 2;
    else if(result>0)
        result = 1;
    else
        result = 3;
    
    return result;
}

/*************************************************************
 * Scissors class implementation
 * **********************************************************/

//Default constructor that initializes the tools strength
//to 1
Scissors::Scissors() : Tool(1,'s')
{
}

//Overload constructor that initializes the tools strength
//based on the argument it is passed.
Scissors::Scissors(int sStrength) : Tool(sStrength,'s')
{
}

//Override of fight function
int Scissors::fight(Tool *comp)
{
    int result;
    //Checks the type used by the computer, adjusts strength
    //accordingly and then stores the difference between
    //player and computer strenght in result.
    if(comp->getType()=='r')
    {
        result = this->getStrength() - 2*comp->getStrength();
    }
    else if(comp->getType()=='p')
    {
        result = 2*this->getStrength() - comp->getStrength();
    }
    else
    {
        result = this->getStrength() - comp->getStrength();
    }
    
    //Checks the value stored in result and changes its value to
    //1,2,or 3 if the player won, lost, or tied respectivey
    if(result<0)
        result = 2;
    else if(result>0)
        result = 1;
    else
        result = 3;
    
    return result;
}














