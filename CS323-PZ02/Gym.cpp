#include "Gym.h"

Gym::Gym() {
	this->name = "";
	this->address = "";
	this->TIN = "";
	this->numberOfEmployees = 0;
	this->membershipFeePrice = 0;
}

Gym::Gym(string name, string address, string TIN, int numberOfEmployees, float membershipFeePrice) : name(name), address(address), TIN(TIN) {
	this->numberOfEmployees = numberOfEmployees;
	this->membershipFeePrice = membershipFeePrice;
}

void Gym::setName(string name) {
	this->name = name;
}

string Gym::getName() {
	return this->name;
}

void Gym::setAddress(string address) {
	this->address = address;
}

string Gym::getAddress() {
	return this->address;
}

void Gym::setTIN(string TIN) {
	this->TIN = TIN;
}

string Gym::getTIN() {
	return this->TIN;
}

void Gym::setNumberOfEmployees(int numberOfEmployees) {
	this->numberOfEmployees = numberOfEmployees;
}

int Gym::getNumberOfEmployees() {
	return this->numberOfEmployees;
}

void Gym::setMembershipFeePrice(float membershipFeePrice) {
	this->membershipFeePrice = membershipFeePrice;
}

float Gym::getMembershipFeePrice() {
	return this->membershipFeePrice;
}

void Gym::showInfo() {
	cout << "Informations about Gym:" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "Gym name --> " << this->name << "\nAddress --> " << this->address << "\nTax identification number --> "
		<< this->TIN << "\nNumber of employees --> " << this->numberOfEmployees << "\nMembership fee price --> " << this->membershipFeePrice << endl;
	cout << endl;
}

Gym::~Gym() {
}