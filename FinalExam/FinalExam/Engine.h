#pragma once
class Engine
{
private:

	int type;
	int cylinder;
	int horsepower;

public:
	Engine();
	Engine(int type, int cylinder, int horsepower);
	~Engine();
	Engine(Engine& engine);
	virtual int getType();
	virtual int getCylinder();
	virtual int getHorsepower();
	virtual void print();

};

