#pragma once
#include "Engine.h"
#include <string>


class Car: public Engine
{
public:

	std::string make;
	std::string model;
	int year;

private:
	Car();
	Car(std::string make, std::string model, int year, int type, int cylinder, int horsepower);
	Car(Car &obj);
	~Car();
	std::string getMake();
	std::string getModel();
	int getYear();
	

};

