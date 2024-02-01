#pragma once
#include "Wheel.h"
class WinterWheel : public Wheel
{
private:
	float threadSize;

public:

	void setThreadSize(float t);
	float getThreadSize();

	WinterWheel();
	WinterWheel(string make, float diameter, float threadSize);
	void PrintWheelInfo();// override 
};

