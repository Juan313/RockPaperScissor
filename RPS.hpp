/************************************************************
 * ** File Name: RPS.hpp
 * ** Author 1: Nathaniel Bennet
 * ** Author 2: Aaron Berns
 * ** Author 3: Juan Du
 * ** Author 4: Christopher Dubbs
 * ** Author 5: Chieko Duncans
 * ** Author 6: Molly Johnson
 * ** Author 7: Armand Reitz
 * ** Date: 02/06/2016
 * ** CS 162 Group Project | Play Rock Paper, Scissors!!!
 * ** File discription: Rock, Paper, and Scissor class declaration file
 * ** Reference 1: Textbook "C++ Early Objects 8th edition"
 * **              written by Tony Gaddis, Judy Walters, and Godfrey Mudganda
 * ** Reference 2: 
 * ** Reference 3: 
 * **************************************************************/

#ifndef RPS_HPP // changed to capitalized
#define RPS_HPP // changed to capitalized
#include <iostream>
#include "Tool.hpp"

/*******************************************************
 **        Rock class declaration
 *******************************************************/
class Rock : public Tool
{
public:
Rock();
Rock(int rStrength);
int fight(Tool *comp);
};

/*******************************************************
 **        Paper class declaration
 *******************************************************/
class Paper : public Tool
{
public:
Paper();
Paper(int pStrength);
int fight(Tool *comp);
};

/*******************************************************
 **        Scissors class declaration
 *******************************************************/
class Scissors : public Tool
{
public:
Scissors();
Scissors(int sStrenght);
int fight(Tool *comp);
};
#endif /* RPS_hpp */
