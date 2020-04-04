#pragma once
#include <vector>
#include "Vehicle.h"

class Showroom {
	string showroomName;
	unsigned int maxCapacity;
	vector<Vehicle> vehicleList;
	

public:
	Showroom(string name = "Unnamed Showroom", unsigned int capacity = 0);

	Showroom(string showroomName, vector<Vehicle> vehicles, unsigned int capacity);

	vector<Vehicle> GetVehicleList(); // & says pass in by reference rather than by value, won't create a copy of the vector


	void AddVehicle(Vehicle v);
	void ShowInventory();
	float GetInventoryValue();
};