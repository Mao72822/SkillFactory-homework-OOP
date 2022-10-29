#pragma once
#include "IElectronics.h"
#include <iostream>

class Portative : virtual public IElectronics
{
public:
	Portative(int batteryLife);
	void ShowSpec() override;
protected:
	int _batteryLife;
};

class SmartPhone final : public Portative
{
public:
	SmartPhone(int batteryLife, double screenSize);
	void ShowSpec() override;
protected:
	double _screenSize;
};
class Laptop final : public Portative
{
public:
	Laptop(int batteryLife, int memorySize);
	void ShowSpec() override;
protected:
	int _memorySize;
};