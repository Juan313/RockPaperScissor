/************************************************************
** File Name: Tool.cpp
** Author 1: Nathaniel Bennet
** Author 2: Aaron Berns
** Author 3: Juan Du
** Author 4: Christopher Dubbs
** Author 5: Chieko Duncans
** Author 6: Molly Johnson
** Author 7: Armand Reitz
** Date: 02/06/2016
** CS 162 Group Project | Play Rock Paper, Scissors!!!
** File discription: Tool class function implementation file
** Reference 1: Textbook "C++ Early Objects 8th edition"
**		written by Tony Gaddis, Judy Walters, and Godfrey Mudganda
** Reference 2: 
** Reference 3: 
**************************************************************/
#include<iostream>
#include<vector>
#include<algorithm>
#include <string>
#include "Tool.hpp"
#include "RPS.hpp"

/**********************************************************
** Tool class
** Constructor: initializes the strength and type variables
***********************************************************/
Tool::Tool(int toolStrength, char toolType)
{
    setStrength(toolStrength);
    setType(toolType);
}

/**********************************************************
 ** Tool class
 ** Destructor
 ***********************************************************/
Tool::~Tool()
{
}

/**********************************************************
** Tool class
** setStrength: sets the strenght variable
***********************************************************/
void Tool::setStrength(int str)
{
    strength = str;
}

/**********************************************************
** Tool class
**  setType: sets the type variable
***********************************************************/
void Tool::setType(char tp)
{
    type = tp;
}

/**********************************************************
 ** Tool class
 ** getStrength: returns the strength variable
 ***********************************************************/
int Tool::getStrength()
{
    return strength;
}

/**********************************************************
 ** Tool class
 ** getType: returns the type variable
 ***********************************************************/
char Tool::getType()
{
    return type;
}



