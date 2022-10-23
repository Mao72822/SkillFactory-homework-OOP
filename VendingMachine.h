#pragma once
#include "SnackSlot.h"

class VendingMachine
{
private:
	int size;
	int emptySlotsCount;
	int slotCount;
	int snacksCount;
	SnackSlot** slots;
public:
    VendingMachine(int SlotCount_);
	~VendingMachine();
	int getSize() const;
	int getEmptySlotsCount() const;
	int getSnacksCount() const;
	void addSlot(SnackSlot* slot);
};