#include "HomeElectronics.h"
#include <iostream>

using namespace std;

HomeElectronics::HomeElectronics(int weight): _weight(weight)
{

}
void HomeElectronics::ShowSpec()
{
	
}
Teapot::Teapot(int weight, int timeHeat) : HomeElectronics(weight), _timeHeat(timeHeat)
{

}
void Teapot::ShowSpec()
{
	cout << "Product weight: " << _weight << " kg" << endl;
	cout << "Heating time: " << _timeHeat << " minutes" << endl;
}
Fridge::Fridge(int weight, int temperature) : HomeElectronics(weight), _temperature(temperature)
{

}
void Fridge::ShowSpec()
{
	cout << "Product weight: " << _weight << " kg" << endl;
	cout << "Temperature in the fridge: " << _temperature << " Celsium" << endl;
}