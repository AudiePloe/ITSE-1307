//
// Made by Audie Ploe
// 03/19/19
// a game guessing game that is painful.
// create random number. user guesses number. stores attempts and displays when they get it right. user input to close out game.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int intNumGuess = 0;
	int intNumAct = 0;
	int intNumMax = 100;
	int intAttempts = 0;
	char charQuit = ' ';
	
	do
	{ // retry game

		intNumAct = rand() % intNumMax + 1;

		do { // user input

			cout << "Please enter a number between 1 and " << intNumMax << ": ";
			cin >> intNumGuess;

		} while (intNumGuess < 1 | intNumGuess > intNumMax);

		if (intNumGuess > intNumAct)
		{
			cout << "Too high!, try again!" << endl;
			intAttempts++; // storing attempts
		}
		else if (intNumGuess < intNumAct)
		{
			cout << "Too low!, try again!" << endl;
			intAttempts++; // storing attempts
		}
		else
		{
			intAttempts++; // storing attempts
			cout << "Wow you actually did it!, and it only took you " << intAttempts << " attempts..." << endl;
		}

		cout << endl << endl;

	} while (intNumGuess != intNumAct);

	do { // making sure they want to quit because they will most likely spam numbers and would normally close the game if they end up getting it right.
		cout << "type Q to quit ";
		cin >> charQuit;
		cout << endl;
	} while (charQuit != 'Q');


    return 0;
}

