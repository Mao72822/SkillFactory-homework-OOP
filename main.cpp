#include <iostream>
#include "Snack.h"
#include <string>
#include "SnackSlot.h"
#include "VendingMachine.h"

using namespace std;
int main() {
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(3/*количество батончиков, которые помещаютс€ в слот*/);
	slot->addSnack(bounty); //ƒобавл€ем батончик в слот
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(3 /* оличество слотов дл€ снеков*/);
	machine->addSlot(slot); // ѕомещаем слот обратно в аппарат

	cout << machine->getEmptySlotsCount() << endl; // ƒолжно выводить количество пустых слотов дл€ снеков
	cout << machine->getSnacksCount() << endl;
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}