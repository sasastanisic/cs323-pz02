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
	cout << "Name --> " << this->name << endl;
	cout << "Surname --> " << this->surname << endl;
	cout << "JMBG --> " << this->JMBG << endl;
	cout << "Age --> " << this->age << endl;
	cout << "Experience --> " << this->yearsOfExperience << " years" << endl;
	cout << "Salary --> " << this->salary << endl;
	cout << "---------------------------" << endl;
}

Coach::~Coach() {
}