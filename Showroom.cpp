#include "Showroom.h"

Showroom::Showroom(string name, unsigned int capacity) {
	this->showroomName = name;
	this->maxCapacity = capacity;
}

Showroom::Showroom(string showroomName, vector<Vehicle> vehicles, unsigned int capacity) {
	this->showroomName = showroomName;
	this->vehicleList = vehicles;
	this->maxCapacity = capacity;
}

// Returns the array of vehicles in the showroom
vector<Vehicle> Showroom::GetVehicleList() {
	return vehicleList;
}

// Adds a vehicle to the showroom
void Showroom::AddVehicle(Vehicle v) {
	// If showroom is full, vehicle is not added
	if (vehicleList.size() == maxCapacity) {
		cout << "Showroom is full! Cannot add " << v.GetYearMakeModel() << endl;
	}
	else vehicleList.push_back(v);
}

// Gets the total value of the showroom
float Showroom::GetInventoryValue() {

	float valueSum = 0;

	// Use a for or for each loop here
	for (Vehicle vehicle : vehicleList) {
		valueSum = valueSum + vehicle.GetPrice();
	}
	
	return valueSum;
}

// Shows all cars in the showroom
void Showroom::ShowInventory() {

	if (vehicleList.size() == 0) {
		cout << showroomName << " is empty!" << endl;
	}
	else {
		cout << "Vehicles in " << showroomName << endl;

		for (Vehicle v : vehicleList) {
			v.Display();
		}
	}
}