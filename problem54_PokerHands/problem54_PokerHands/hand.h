#pragma once
#include <vector>
#include "card.h"


class hand
{

public:

	std::vector<card> cards;



private:
	hand();
	~hand();
	void addCard(card c);
	void checkPair();
	void checkTwoPair();
	void compareTwoPair();
	void comparePairs();
	void checkTOAK();
	void compareTOAK();
	void checkStrait();
	void compareStrait();
	void checkFlush();
	void compareFlush();
	void checkFullHouse();
	void compareFullHouse();
	void checkFOAK();
	void compareFOAK();
	void checkStraitFlush();
	void compareStraightFlush();
	int evalHand();

};

