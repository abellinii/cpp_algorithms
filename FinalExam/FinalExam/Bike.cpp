#include "Bike.h"

Bike::Bike()
{

	this->make;
	this->engineVolume;

}

Bike::Bike(std::string make, std::string engineVolume, int type, int cylinder, int horsepower)
	:Engine{type, cylinder, horsepower} {

	this->make = make;
	this->engineVolume = engineVolume;

};

Bike::Bike(Bike &obj) {

	this->make = obj.make;
	this->engineVolume = engineVolume;

};


Bike::~Bike()
{


}


std::string Bike::getMake() {

	return make;

};


std::string Bike::getEngineVolume() {

	return engineVolume;

};