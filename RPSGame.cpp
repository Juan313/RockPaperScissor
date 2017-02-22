/************************************************************
** File Name: RPSGame.cpp
** Author 1: Nathaniel Bennet
** Author 2: Aaron Berns
** Author 3: Juan Du
** Author 4: Christopher Dubbs
** Author 5: Chieko Duncans
** Author 6: Molly Johnson
** Author 7: Armand Reitz
** Date: 02/06/2016
** CS 162 Group Project | Play Rock Paper, Scissors!!!
** File discription: RPSGame class implementation file
**************************************************************/
#include "RPSGame.hpp"
#include <cstdlib>
#include <ctime>

/**********************************************************************************************************************
** Description: This function accepts no arguments and returns nothing. This function will first check what the status
** of the last round was. If this is the first round, or if the previous round was a draw, the computer will select a tool
** at random. If the human won the last round, the computer will anticipate that the user is most likely to repeat using
** the tool that won for them last time, and pick the appropriate tool to defeat it. If the computer won the last round,
** the computer will anticipate that the user is most likely to use the tool that would have beaten the computer in the
** previous round, and pick the appropriate tool to defeat it.
*********************************************************************************************************************/
char RPSGame::computerChoice()
{
	char computerTool;
	
	if (last_winner == 1) //human won last, computer lost last
	{
		//if last tool used by human == rock
		if (human_last_tool == 'r')
		{
			//program anticipates human using same tool as won last round
			computerTool = 'p';
		}

		//if last tool used by human == paper
		else if (human_last_tool == 'p')
		{
			//program anticipates human using same tool as won last round
			computerTool = 's';
		}

		//if last tool used by human == scissors
		else
		{
			//program anticipates human using same tool as won last round
			computerTool = 'r';
		}
	}

	else if (last_winner == 2) //computer won last, human lost last
	{
		//if last tool used by human == rock
		if (human_last_tool == 'r')
		{
			//program anticipates human thinking computer will play winning tool (p)
			//again and playing s
			computerTool = 'r';
		}

		//if last tool used by human == paper
		else if (human_last_tool == 'p')
		{
			//program anticipates human thinking computer will play winning tool (s)
			//again and playing r
			computerTool = 'p';
		}

		//if last tool used by human == scissors
		else
		{
			//program anticipates human thinking computer will play winning tool (r)
			//again and playing p
			computerTool = 's';
		}
	}

	
	else //if first play (lastWinner == 0) or last round was a draw (lastWinner == 3)
	{
		//rand num formula in a range is: number = (rand() % (maxValue - minValue + 1)) + minValue
		//min value = 1, max value = 3
		int randomNum = (rand() % 3 + 1);
		if (randomNum == 1)
		{
			computerTool = 'r';
		}
		else if (randomNum == 2)
		{
			computerTool = 'p';
		}
		else
		{
			computerTool = 's';
		}
	}
	
	return computerTool;
}

// Constructor
RPSGame::RPSGame (int hr, int hp, int hs, int cr, int cp, int cs) {
    human_rock = new Rock(hr);
    human_paper = new Paper(hp);
    human_scissors = new Scissors(hs);
    computer_rock = new Rock(cr);
    computer_paper = new Paper(cp);
    computer_scissors = new Scissors(cs);
    computer_wins = 0;
    human_wins = 0;
    ties = 0;
    last_winner = 0;    // lets AI know its first round
    unsigned seed = time(0);    // seed srand
    srand(seed);
}
// Destructor
RPSGame::~RPSGame() {
  delete human_rock;
  delete human_paper;
  delete human_scissors;
  delete computer_rock;
  delete computer_paper;
  delete computer_scissors;
}

// Takes two characters as arguments representing human tool and computer tool
// Updates stats on RPSGame object and returns fight results 
int RPSGame::play (char humanChoice, char computerChoice) {
    int result;
    Tool* human;
    Tool* computer;
    
    // Set human choice
    if (humanChoice == 'r') {
        human = human_rock; 
    } else if (humanChoice == 'p') {
        human = human_paper; 
    } else {
        human = human_scissors; 
    }

    // Set computer choice
    if (computerChoice == 'r') {
        computer = computer_rock; 
    } else if (computerChoice == 'p') {
        computer = computer_paper;
    } else {
        computer = computer_scissors;
    }
    
    // Fight
    result = human->fight(computer);
    // Set results
    set_winner(result);
    set_human_last_tool(humanChoice); 
    set_comp_last_tool(computerChoice);

    return result;
}

// Sets winner based on int argument 
void RPSGame::set_winner (int winner) {
    if (winner == 1) {
        set_human_wins(get_human_wins() + 1);
        set_last_winner(1);
    } else if (winner == 2) {
        set_computer_wins(get_computer_wins() + 1);
        set_last_winner(2);
    } else {
        set_ties(get_ties() + 1);
        set_last_winner(3);         // sets tie
    }
}

// Prints basic stats from RPSGame
void RPSGame::print_stats () {
    std::cout << "Human wins: " << get_human_wins() << std::endl;
    std::cout << "Computer wins: " << get_computer_wins() << std::endl; 
    std::cout << "Ties: " << get_ties() << std::endl;
}
