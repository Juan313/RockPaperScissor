/************************************************************
** File Name: Tool.hpp
** Author 1: Nathaniel Bennet
** Author 2: Aaron Berns
** Author 3: Juan Du
** Author 4: Christopher Dubbs
** Author 5: Chieko Duncans
** Author 6: Molly Johnson
** Author 7: Armand Reitz
** Date: 02/06/2016
** CS 162 Group Project | Play Rock Paper, Scissors!!!
** File discription: Tool class specification file
**************************************************************/

#ifndef TOOL_HPP
#define TOOL_HPP

#include <string>

class Tool
{
private:
    int strength;
    char type;

public:
    Tool(int toolStrength, char toolType);
    virtual ~Tool();
    void setStrength(int str);
    void setType(char tp);
    int getStrength();
    char getType();
    virtual int fight(Tool *comp) = 0;
};

#endif
