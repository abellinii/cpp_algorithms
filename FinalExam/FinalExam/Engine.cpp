#include "Engine.h"

Engine::Engine() {

	int type;
	int cylinder;
	int horsepower;

};


Engine::Engine(int type, int cylinder, int horsepower) {

	this->type = type;
	this->cylinder = cylinder;
	this->horsepower = horsepower;

};

Engine::Engine(Engine& obj)
{
	this->type = obj.type;
	this->cylinder = obj.cylinder;
	this->horsepower = obj.horsepower;

}


Engine::~Engine()
{
}


int Engine::getType() {

	return type;

};


int Engine::getCylinder() {

	return cylinder;

};


int Engine::getHorsepower() {

	return horsepower;

};

void Engine::print() {




}