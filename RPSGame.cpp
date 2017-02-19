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
** File discription: RPSGame class implementation file
**************************************************************/
#include "RPSGame.hpp"

//in another function (like main), use srand/generator seed/time 
//function outside of loop to seed once:
//#include <ctime>
//#include <cstdlib>
//unsigned randomGeneratorSeed;
//randomGeneratorSeed = time(0);
//srand(randomGeneratorSeed);

//also note: I used generic names for some of the variables. will have to change depending on what the member 
//variables have actually been named by the other group members

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
	//need member variables to store last winner(1,2 or 3) and user's last choice(r,p or s), initialize to a value
	//1 = human won last, 2 = computer won last, 3 = last round was draw
	//note: this function should be called before the function that lets the human choose their current round
	//tool, so that the human tool used in this function is from the previous round and not the current round
	//alternatively, there could be a "lastHumanTool" data member and a "currentHumanTool" data member 
	//to keep the two separate.
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

	//If this is the first play, or if the last round was a draw, computer tool should be random.
	//Set lastWinner to 0 in constructor to indicate first play
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
