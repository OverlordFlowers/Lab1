#pragma once
#include<iostream>
#include<vector>

using namespace std;

class Vehicle {
	string make, model;
	unsigned int year, miles;
	float price;

public:
	Vehicle();
	Vehicle(string make, string model, int year, float price, int miles);

	void Display();
	string GetYearMakeModel();
	float GetPrice();
};