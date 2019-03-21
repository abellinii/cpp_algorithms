#include "Plane.h"



Plane::Plane()
{
	int numOfEngines;
	int liftLoad;


}

Plane::Plane(int numOfEngines, int liftLoad, int type, int cylinder, int horsepower)
	:Engine{ type, cylinder, horsepower }
{

	this->numOfEngines = numOfEngines;
	this->liftLoad = liftLoad;



};




Plane::Plane(Plane &obj) {

	this->numOfEngines = obj.numOfEngines;
	this->liftLoad = obj.liftLoad;

};


Plane::~Plane()
{
}

int Plane::getNumOfEngines() {

	return numOfEngines;

};


int Plane::getliftLoad() {

	return liftLoad;

};
