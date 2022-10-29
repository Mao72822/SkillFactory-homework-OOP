#include "Portative.h"
#include <iostream>

using namespace std;

Portative::Portative(int batteryLife) : _batteryLife(batteryLife)
{

}

void Portative::ShowSpec() 
{

}
SmartPhone::SmartPhone(int batteryLife, double screenSize) : Portative(batteryLife), _screenSize(screenSize)
{

}
void SmartPhone::ShowSpec()
{
	cout << "Batterlife: " << _batteryLife << " hours" << endl;
	cout << "Screen size: " << _screenSize << " inches" << endl;
}
Laptop::Laptop(int batteryLife, int memorySize) : Portative(batteryLife), _memorySize(memorySize)
{

}
void Laptop::ShowSpec()
{
	cout << "Batterlife: " << _batteryLife << " hours" << endl;
	cout << "Memory size: " << _memorySize << " GB" << endl;
}