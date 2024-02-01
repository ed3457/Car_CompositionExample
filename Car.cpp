#include "Car.h"

void Car::setMake(string m)
{
    make = m;
}

string Car::getMake()
{
    return make;
}

void Car::setEngineType(EngineType t)
{
    engineType = t;
}

EngineType Car::getEngineType()
{
    return engineType;
}

void Car::setWheel(int no, Wheel w)
{
    // TODO: validation for the wheel no 
    carWheels[no] = w;
}

Wheel Car::getWheel(int no)
{
    return carWheels[no];
}

Car::Car()
{
    make = "not set yet";
    engineType = EngineType::Gas;
}

Car::Car(Wheel w[], string m, EngineType t)
{
    for (int i = 0; i < 4; i++)
        carWheels[i] = w[i];
    make = m;
    engineType = t;



}
