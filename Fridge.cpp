#include "Fridge.h"
#include <iostream>
Fridge::Fridge() {

	temperature = 5;
	isuser = true;

}

int  Fridge::Gettemperature() { return temperature;}

void Fridge::Open() {
	if (isuser)
		std::cout << "Fridge opened";
	else
		std::cout << "Fridge closed";
}