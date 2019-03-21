#include "Car.h"



Car::Car()
{

	std::string make;
	std::string model;
	int year;
}


Car::Car(std::string make, std::string model, int year, int type, int cylinder, int horsepower)
	:Engine{ type,cylinder,horsepower } {


	this->make = make;
	this->model = model;
	this->year = year;


};


Car::Car(Car &obj) {

	this->make = obj.make;
	this->model = obj.model;
	this->year = obj.year;

};

Car::~Car()
{

}

std::string Car::getMake() {

	return make;
};


std::string Car::getModel() {

	return model;

};


int Car::getYear() {


	return year;

};
