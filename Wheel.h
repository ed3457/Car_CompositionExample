#pragma once
#include <string>
#include <iostream>
using namespace std; 

class Wheel
{
private:
	string make;
	float diameter;

public: 

	void setMake(string m);
	string getMake();

	void setDiameter(float d);
	float getDiameter();

	Wheel();
	Wheel(string m, float d);
	void PrintWheelInfo();

};

