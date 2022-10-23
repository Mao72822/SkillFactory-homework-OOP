#include "Snack.h"
#include <iostream>
#include <string>
using namespace std;
Snack::Snack(const string& name)
{
	this->name = name;
}
Snack::Snack(const string& name, int kalori)
{
	this->name = name;
	this->kalori = kalori;
}
Snack::Snack(const string& name, int kalori, int price)
{
	this->name = name;
	this->kalori = kalori;
	this->price = price;
}
string Snack::getName() const
{
	return name;
}
int Snack::getPrice() const
{
	return price;
}
int Snack::getKalori() const
{
	return kalori;
}
void Snack::setName(char* value)
{
	name = value;
}
void Snack::setPrice(int value)
{
	price = value;
}
void Snack::setKalori(int value)
{
	kalori = value;
}
