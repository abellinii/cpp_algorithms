#include "hand.h"



hand::hand()
{

	std::vector<card> cards;

}


hand::~hand()
{
}


void hand::addCard(card c) {

	
	cards.push_back(c);

};

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



int hand::evalHand() {



};
