#include "Wheel.h"

void Wheel::setMake(string m)
{
    make = m;
}

string Wheel::getMake()
{
    return make;
}

void Wheel::setDiameter(float d)
{
    diameter = d;
}

float Wheel::getDiameter()
{
    return diameter;
}

Wheel::Wheel()
{
    diameter = 15;
    make = "Not Set yet";
}

Wheel::Wheel(string m, float d)
{
    diameter = d;
    make = m;
}
