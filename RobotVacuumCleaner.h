#pragma once
#include "HomeElectronics.h"
#include "Portative.h"

class RobotVacuumCleaner final : public HomeElectronics, Portative
{
public:
	RobotVacuumCleaner(int weight, int batteryLife, int range);
	void ShowSpec() final;
protected: 
	int _range;
};