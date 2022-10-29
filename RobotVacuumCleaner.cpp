#include "RobotVacuumCleaner.h"

using namespace std;

RobotVacuumCleaner::RobotVacuumCleaner(int weight, int batteryLife, int range): HomeElectronics(weight), Portative(batteryLife), _range(range)
{

}
void RobotVacuumCleaner::ShowSpec()
{
	cout << "Product weight: " << _weight << " kg" << endl;
	cout << "Batterlife: " << _batteryLife << " hours" << endl;
	cout << "Range of cleaning: " << _range << " metres" << endl;
}