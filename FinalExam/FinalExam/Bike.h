#pragma once

#include "Engine.h"
#include <string>


class Bike: public Engine
{
public:

	std::string make;
	std::string engineVolume;


private:
	Bike();
	Bike(std::string make, std::string engineModel, int type, int cylinder, int horsepower);
	Bike(Bike &obj);
	~Bike();
	std::string getMake();
	std::string getEngineVolume();
};

