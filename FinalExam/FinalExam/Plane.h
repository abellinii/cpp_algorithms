#pragma once
#include "Engine.h"


class Plane:public Engine 
{
public:
	int numOfEngines;
	int liftLoad;


private:
	Plane();
	Plane(int numOfEngines, int liftLoad, int type, int cylinder, int horsepower);
	Plane(Plane &obj);
	~Plane();
	int getNumOfEngines();
	int getliftLoad();
};

