#pragma once
#include "IElectronics.h"
#include <iostream>

class HomeElectronics : virtual public IElectronics
{
public:
	HomeElectronics(int weight);
	void ShowSpec() override;
protected:
	int _weight;
};

class Teapot final : public HomeElectronics
{
public:
	Teapot(int weight, int timeheat);
	void ShowSpec() override;
private:
	int _timeHeat;
};
class Fridge final : public HomeElectronics
{
public:
	Fridge(int weight, int temperature);
	void ShowSpec() override;
private:
	int _temperature;
};