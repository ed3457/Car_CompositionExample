#pragma once
#include "Wheel.h"
enum EngineType {Gas,Hybrid, Electric};
class Car
{
private:
	EngineType engineType;
	string make;
	Wheel carWheels[4];

public:

	void setMake(string m);
	string getMake();

	void setEngineType(EngineType t);
	EngineType getEngineType();

	void setWheel(int no, Wheel w);
	Wheel getWheel(int no);

	Car();
	Car(Wheel w[], string m, EngineType t);

};

