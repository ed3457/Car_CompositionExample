// Car_CompositionExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Wheel.h"
#include "WinterWheel.h"
#include "Car.h"
int main()
{
	Car c1;

	//cout << c1.getWheel(0).getMake() << endl;

	Wheel w1("D1", 15);

	c1.setWheel(0, w1);// set wheel 0 to w 
	c1.setWheel(1, w1);// set wheel 1 to w 
	c1.setWheel(2, w1);// set wheel 2 to w 
	c1.setWheel(3, w1);// set wheel 3 to w 

	//cout << c1.getWheel(0).getMake() << endl;

	//w1.PrintWheelInfo();

	Wheel newWheels[] = {w1,w1,w1,w1};

	Car c2(newWheels, "Jeep", EngineType::Hybrid);
	//cout << c2.getWheel(0).getMake() << endl;

	WinterWheel w5;

	c1.setWheel(0, w5);

	c1.getWheel(0).PrintWheelInfo(); // early binding 



}
