#include <iostream>
#include "Snack.h"
#include <string>
#include "SnackSlot.h"
#include "VendingMachine.h"

using namespace std;
int main() {
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(3/*���������� ����������, ������� ���������� � ����*/);
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(3 /*���������� ������ ��� ������*/);
	machine->addSlot(slot); // �������� ���� ������� � �������

	cout << machine->getEmptySlotsCount() << endl; // ������ �������� ���������� ������ ������ ��� ������
	cout << machine->getSnacksCount() << endl;
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
}