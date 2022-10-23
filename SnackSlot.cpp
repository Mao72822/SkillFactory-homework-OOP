#include "SnackSlot.h"
#include <iostream>
#include <string>
using namespace std;

SnackSlot::SnackSlot(short size_)
{
	size = size_;
	snacks = new Snack* [size_];
}
SnackSlot::~SnackSlot()
{
	delete[] snacks;
}
short SnackSlot::getSize() const
{
	return size;
}
short SnackSlot::getSnackCount() const
{
	return snackCount;
}
void SnackSlot::addSnack(Snack* snack)
{
	if (snackCount < size)
	{
		snacks[snackCount] = snack;
		snackCount++;
	}

}