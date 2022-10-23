#include <iostream>
#include <string>
#include "VendingMachine.h"

using namespace std;
VendingMachine::VendingMachine(int SlotCount_)
{
	size = SlotCount_;
	emptySlotsCount = SlotCount_;
	slots = new SnackSlot* [size];
}
VendingMachine::~VendingMachine()
{
	delete[] slots;
}
int VendingMachine::getSize() const
{
	return size;
}
int VendingMachine::getEmptySlotsCount() const
{
	return emptySlotsCount;
}
int VendingMachine::getSnacksCount() const
{
	return snacksCount;
}
void VendingMachine::addSlot(SnackSlot* slot)
{
	slots[slotCount] = slot;
	emptySlotsCount--;
	slotCount++;
	snacksCount += slot->getSnackCount();
}