#pragma once
#include "Showroom.h"

class Dealership {
	vector<Showroom> showroomList;
	string dealershipName;
	unsigned int dealershipCapacity;

public:
	Dealership(string name = "Generic Dealership", unsigned int capacity = 0);

	Dealership(string name, vector<Showroom> showroomList, unsigned int capacity);

	void AddShowroom(Showroom s);

	float GetAveragePrice();

	void ShowInventory();
};