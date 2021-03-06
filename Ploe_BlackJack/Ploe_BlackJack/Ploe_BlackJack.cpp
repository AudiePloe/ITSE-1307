//
// Audie Ploe
// 05/06/19
// 
// The program is a game of Black Jack
// 

#include "pch.h"
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
using namespace std;


void getWinner(Player objpDealer, Player &objpPlayer, float fltpBetAmount)
{
	if (objpDealer.getHandPointValue() <= 21 && objpPlayer.getHandPointValue() <= 21) // if both not over 21 continue
	{
		if (objpPlayer.getHandPointValue() > objpDealer.getHandPointValue())
		{
			cout << "You win!!!" << endl;
			objpPlayer.WinBet(fltpBetAmount);
			cout << "You won " << fltpBetAmount * 1.5f << " dollars!" << endl;
		}
		if (objpPlayer.getHandPointValue() < objpDealer.getHandPointValue())
		{
			cout << "Dealer wins!" << endl;
			objpPlayer.LoseBet(fltpBetAmount);
			cout << "You lost " << fltpBetAmount << " dollars!" << endl;
		}
	}
	else if (objpDealer.getHandPointValue() > 21 && objpPlayer.getHandPointValue() > 21)
	{
		cout << "Dealer wins!" << endl;
		objpPlayer.LoseBet(fltpBetAmount);
		cout << "You lost " << fltpBetAmount << " dollars!" << endl;
	}
	else if (objpDealer.getHandPointValue() > 21 && objpPlayer.getHandPointValue() <= 21)
	{
		cout << "You win!!!" << endl;
		objpPlayer.WinBet(fltpBetAmount);
		cout << "You won " << fltpBetAmount * 1.5f << " dollars!" << endl;
	}
	else if (objpDealer.getHandPointValue() <= 21 && objpPlayer.getHandPointValue() > 21)
	{
		cout << "Dealer wins!" << endl;
		objpPlayer.LoseBet(fltpBetAmount);
		cout << "You lost " << fltpBetAmount << " dollars!" << endl;
	}
	else if (objpDealer.getHandPointValue() == objpPlayer.getHandPointValue())
	{
		cout << "Dealer wins!" << endl;
		objpPlayer.LoseBet(fltpBetAmount);
		cout << "You lost " << fltpBetAmount << " dollars!" << endl;
	}
	else
	{
		cerr << "ERROR in finding winner" << endl;
	}
}





int main()
{
	srand(time(NULL));

	Player objDealer;
	Player objPlayer;
	Deck objDeck = Deck(4);
	char PlayAgain = ' ';
	char GetCard = ' ';
	float fltBetAmount = 0;

	objDealer.setPlayerName("Dealer");
	objPlayer.setPlayerName("You");

	objDeck.shuffle();


	cout << "Welcome to BlackJack!  Would you like to play?  (Y)/(N): ";
	cin >> PlayAgain;
	cout << endl;
	PlayAgain = toupper(PlayAgain);

	objPlayer.setPlayerMoney(500.00);

	while (PlayAgain == 'Y')
	{

		cout << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		objDealer.clearHand();
		objPlayer.clearHand();

		cout << "You have " << objPlayer.getPlayerMoney() << " dollars" << endl << endl;

		do
		{
			cout << "Please enter bet amount: ";
			cin >> fltBetAmount;
			cout << endl << endl;


			if (!cin)
			{
				cout << "Please enter a number only" << endl;
				return 0;
				//fltBetAmount = objPlayer.getPlayerMoney();
			}

		} while (fltBetAmount > objPlayer.getPlayerMoney());


		for (int intFirstTwoCards = 1; intFirstTwoCards <= 2; intFirstTwoCards++) {
			objDealer.addCard(objDeck.getCard());
			objPlayer.addCard(objDeck.getCard());
		}

		
		while (objDealer.getHandPointValue() <= 15 && objDealer.getNumberCards() < 5) {
			objDealer.addCard(objDeck.getCard());
		}

		cout << objDealer.toString() << endl;
		cout << objPlayer.toString() << endl;

		
		do
		{
			cout << endl << "Would you like to get another card?: ";
			cin >> GetCard;
			GetCard = toupper(GetCard);

			if (GetCard == 'Y')
			{
				objPlayer.addCard(objDeck.getCard());
			}

			cout << endl << objDealer.toString() << endl;
			cout << objPlayer.toString() << endl << endl;

		} while (GetCard == 'Y');

		if (objDeck.shouldShuffle()) {
			objDeck.shuffle();
		}

		getWinner(objDealer, objPlayer, fltBetAmount);

		if (objPlayer.getPlayerMoney() > 0.0f)
		{
			cout << endl << "Would you like to play another round? (Y)/(N): ";
			cin >> PlayAgain;
			cout << endl;
			PlayAgain = toupper(PlayAgain);
		}
		else
		{
			cout << "Dummy! You ran out of money, Goodbye!" << endl;
			PlayAgain = 'N';
		}
	}

	return 0;
}
