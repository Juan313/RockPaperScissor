/************************************************************
** File Name: RPSGame.hpp
** Author 1: Nathaniel Bennet
** Author 2: Aaron Berns
** Author 3: Juan Du
** Author 4: Christopher Dubbs
** Author 5: Chieko Duncans
** Author 6: Molly Johnson
** Author 7: Armand Reitz
** Date: 02/06/2016
** CS 162 Group Project | Play Rock Paper, Scissors!!!
** File discription: RPSGame class specification file
**************************************************************/
#include "Tool.hpp"
#include "RPS.hpp"

class RPSGame
{
private:
  Tool *human;
  Tool *comp;
  int human_wins;
  int computer_wins;
  int ties;
  char human_last_tool;     // AI uses these variables in choosing next Tool
  char comp_last_tool;
  int last_winner;
  
};
