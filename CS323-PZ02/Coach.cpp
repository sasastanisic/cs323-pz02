#include "Coach.h"

Coach::Coach() {
	this->yearsOfExperience = 0;
	this->salary = 0;
}

Coach::Coach(string name, string surname, string JMBG, int age, int yearsOfExperience, float salary) : Person(name, surname, JMBG, age) {
	this->yearsOfExperience = yearsOfExperience;
	this->salary = salary;
}

void Coach::setYearsOfExperience(int yearsOfExperience) {
	this->yearsOfExperience = yearsOfExperience;
}

int Coach::getYearsOfExperience() {
	return this->yearsOfExperience;
}

void Coach::setSalary(float salary) {
	this->salary = salary;
}

float Coach::getSalary() {
	return this->salary;
}

void Coach::toString() {
	cout << "Coach" << endl;
}

Coach::~Coach() {
}