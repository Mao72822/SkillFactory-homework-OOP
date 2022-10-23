#pragma once
#include "Snack.h"
class SnackSlot
{
private:
	short size;
	short snackCount;
	Snack** snacks;



public:
	SnackSlot(short size);
	~SnackSlot();
	short getSize() const;
	short getSnackCount() const;

	
	void addSnack(Snack* snack);

};
