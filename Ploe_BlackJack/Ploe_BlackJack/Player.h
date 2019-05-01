#pragma once
#include <string>
#include <vector>
#include "Card.h"

class Player
{
public:
	Player();
	~Player();
private:
	int intPlayerNumber;
	std::string strName;
	float fltPlayerMoney;
	std::vector<Card> vtrPlayerHand;
	void setPlayerNumber();
public:
	std::string inputPlayerName();
	void setPlayerName(std::string strpName);
	int getHandPointValue();
	void printHand();
	std::string toString();
	std::string getHandString();
	std::string getPlayerName();
	bool addCard(Card objpCard);
	int getNumberCards();
	void init();
	void clearHand();
	void setPlayerMoney(int intpMoney);
	float getPlayerMoney();
	void WinBet(float fltpBetAmount);
	void LoseBet(float fltpBetAmount);
};
