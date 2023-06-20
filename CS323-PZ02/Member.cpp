#include "Member.h"

Member::Member() {
	this->height = 0;
	this->weight = 0;
}

Member::Member(string name, string surname, string JMBG, int age, float height, float weight) : Person(name, surname, JMBG, age) {
	this->height = height;
	this->weight = weight;
}

void Member::setHeight(float height) {
	this->height = height;
}

float Member::getHeight() {
	return this->height;
}

void Member::setWeight(float weight) {
	this->weight = weight;
}

float Member::getWeight() {
	return this->weight;
}

float Member::calculateBMI() {
	return (this->weight / this->height) * 55;
}

string Member::checkYourShape(float bmiValue) {
	string advice = "";

	if (bmiValue <= 18.5) {
		advice = "You're underweight!";
	}
	else if (bmiValue > 18.5 && bmiValue <= 25) {
		advice = "You're in a great shape!";
	}
	else if (bmiValue > 25 && bmiValue <= 30) {
		advice = "You're overweight!";
	}
	else if (bmiValue > 30) {
		advice = "You're obese!";
	}

	return advice;
}

void Member::toString() {
	cout << "New gym member:" << endl;
	cout << "---------------------------" << endl;
	cout << "Name --> " << this->name << endl;
	cout << "Surname --> " << this->surname << endl;
	cout << "JMBG --> " << this->JMBG << endl;
	cout << "Age --> " << this->age << endl;
	cout << "Height --> " << this->height << " cm" << endl;
	cout << "Weight --> " << this->weight << " kg\n" << endl;
}

Member::~Member() {
}