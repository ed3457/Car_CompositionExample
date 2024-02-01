#include "WinterWheel.h"

void WinterWheel::setThreadSize(float t)
{
    threadSize = t;
}

float WinterWheel::getThreadSize()
{
    return threadSize;
}

WinterWheel::WinterWheel():Wheel()
{
    threadSize = 1;
}

WinterWheel::WinterWheel(string make, float diameter, float threadSize):Wheel(make,diameter)
{
    this->threadSize = threadSize;
}

void WinterWheel::PrintWheelInfo()
{
    Wheel::PrintWheelInfo();
    cout << "Thread Size:" << threadSize << endl;
}
