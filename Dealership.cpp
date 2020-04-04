#include "Dealership.h"

Dealership::Dealership(string name, unsigned int capacity) {
	this->dealershipName = name;
	this->dealershipCapacity = capacity;
}

Dealership::Dealership(string name, vector<Showroom> showroomList, unsigned int capacity) {
	this->dealershipName = name;
	this->showroomList = showroomList;
	this->dealershipCapacity = capacity;
}

// Adds a showroom
void Dealership::AddShowroom(Showroom s) {
	// If dealership is full, no showroom is added
	if (showroomList.size() == dealershipCapacity) {
		cout << "Dealership is full, can't add another showroom!" << endl;
	}

	else showroomList.push_back(s);
}

// Gets average price of all vehicles across all vehicles
float Dealership::GetAveragePrice() {

	float totalPrice = 0;
	float averagePrice = 0;
	int vehicleCount = 0;

	for (Showroom s : showroomList) {
		for (Vehicle v : s.GetVehicleList()) {
			totalPrice = totalPrice + v.GetPrice();
			vehicleCount++;
		}
	}
	// If there are no vehicles because there are no showrooms, average price is 0.
	if (vehicleCount == 0) {
		return averagePrice = 0;
	}
	// Otherwise the function proceeds as normal.
	else return averagePrice = totalPrice / vehicleCount;
}

// Lists all vehicles in each showroom of the dealership
void Dealership::ShowInventory() {
	if (showroomList.size() == 0) {
		cout << dealershipName << " is empty!" << endl;
	}
	else for (Showroom s : showroomList) {
		s.ShowInventory();
		cout << endl;
	}

	cout << "Average car price: $" << this->GetAveragePrice();
	
}