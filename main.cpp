#include <iostream>
#include "IElectronics.h"
#include "HomeElectronics.h"
#include "Portative.h"
#include "RobotVacuumCleaner.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	IElectronics* electronics[5];

	electronics[0] = new SmartPhone(8, 5.1);
	electronics[1] = new Laptop(12, 150);
	electronics[2] = new Teapot(5, 10);
	electronics[3] = new Fridge(100, -17);
	electronics[4] = new RobotVacuumCleaner(6, 2, 20);

	bool open = true;
	while (open)
	{
		cout << "Chose one of this options: 1 - SmartPhone, 2 - Laptrop, 3 - Teapot, 4 - Fridge, 5 - RobotVacuumCleaner, 0 - Exit" << endl;
		int choise;
		cin >> choise;
		switch (choise)
		{
		case 1:
			electronics[0]->ShowSpec();
			break;

		case 2:
			electronics[1]->ShowSpec();
			break;

		case 3:
			electronics[2]->ShowSpec();
			break;

		case 4:
			electronics[3]->ShowSpec();
			break;

		case 5:
			electronics[4]->ShowSpec();
			break;
		case 0:
			open = false;
			break;

		default:
			cout << "Error! Choose one from options!" << endl;
			break;

		}

	}
	delete electronics[0];
	delete electronics[1];
	delete electronics[2];
	delete electronics[3];
	delete electronics[4];

	return 0;
}