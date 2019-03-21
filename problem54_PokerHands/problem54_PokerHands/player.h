#pragma once
#include <vector>
#include "hand.h"


class player
{


public:
	int wins;
	std::vector<hand> hands;




private:
	player();
	~player();
	hand getHand();
	void addHand();
};

