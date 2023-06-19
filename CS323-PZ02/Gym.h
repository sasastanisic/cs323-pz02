#pragma once
#include <iostream>
#include <string>
using namespace std;

class Gym {
protected:
	string name;
	string address;
	string TIN;
	int numberOfEmployees;
	float membershipFeePrice;

public:
	Gym();
	Gym(string name, string address, string TIN, int numberOfEmployees, float membershipFeePrice);

	void setName(string name);
	string getName();
	void setAddress(string address);
	string getAddress();
	void setTIN(string TIN);
	string getTIN();
	void setNumberOfEmployees(int numberOfEmployees);
	int getNumberOfEmployees();
	void setMembershipFeePrice(float membershipFeePrice);
	float getMembershipFeePrice();

	void showInfo();

	~Gym();
};