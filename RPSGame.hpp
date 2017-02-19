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
    Tool *human_rock;
    Tool *human_paper;
    Tool *human_scissors;
    Tool *computer_rock;
    Tool *computer_paper;
    Tool *computer_scissors;
    int human_wins;
    int computer_wins;
    int ties;
    char human_last_tool; // AI uses these variables in choosing next Tool
    char comp_last_tool;
    int last_winner;
public:
    // Constructor
    RPSGame (int hr, int hp, int hs, int cr, int cp, int cs);
    // Set human wins
    void set_human_wins (int wins) {human_wins = wins;}
    // Get human wins
    int get_human_wins () {return human_wins;}
    // Set computer wins
    void set_computer_wins (int wins) {computer_wins = wins;}
    // Get computer wins
    int get_computer_wins () {return computer_wins;}
    // Set number of ties
    void set_ties (int ties_input) {ties = ties_input;}
    // Get number of ties
    int get_ties () {return ties;}
    // Set last tool human used
    void set_human_last_tool (char tool) {human_last_tool = tool;}
    // Get last tool human used
    char get_human_last_tool () {return human_last_tool;}
    // Set last tool computer used
    void set_comp_last_tool (char tool) {comp_last_tool = tool;}
    // Get last tool computer used
    char get_comp_last_tool () {return comp_last_tool;}
    // Set last winner
    void set_last_winner (int winner) {last_winner = winner;}
    // Get last winner
    int get_last_winner () {return last_winner;}
    // AI chooses and returns next tool type
    char computerChoice ();
    // Fight based on computer and human choice
    int play (char humanChoice, char computerChoice);
    // Set winner
    void set_winner (int winner);
    // Prints basic stats from RPSGame
    void print_stats ();
};
