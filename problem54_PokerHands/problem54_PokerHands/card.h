#pragma once
class card
{
public:
	char suit;
	int number;


private:
	card();
	~card();
	void setNumber(int n);
	int getNumber();
	void setSuit(char s);
	int getSuit();
};

