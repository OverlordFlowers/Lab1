#include "Vehicle.h"
#include <string>
using namespace std;

Vehicle::Vehicle() {
	make = "COP3503";
	model = "Rust Bucket";
	year = 1900;
	price = 0;
	miles = 0;
}

Vehicle::Vehicle(string make, string model, int year, float price, int miles) {
	this->make = make;
	this->model = model;
	this->year = year;
	this->price = price;
	this->miles = miles;
}

void Vehicle::Display() {
	//print something out
	cout << year << " " << make << " " << model << " $" << price << " " << miles << endl;
}

// Returns the year make model in a string
string Vehicle::GetYearMakeModel() {
	// Converts the integer into a string
	string yearString = to_string(year);
	string yearMakeModel = yearString + " " + make + " " + model + " ";

	return yearMakeModel;
}

// Returns the price of the vehicle
float Vehicle::GetPrice() {
	return price;
}

