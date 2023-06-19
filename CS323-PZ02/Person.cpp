#include "Person.h"

Person::Person() {
	this->name = "";
	this->surname = "";
	this->JMBG = "";
	this->age = 0;
}

Person::Person(string name, string surname, string JMBG, int age) : name(name), surname(surname), JMBG(JMBG) {
	this->age = age;
}

void Person::setName(string name) {
	this->name = name;
}

string Person::getName() {
	return this->name;
}

void Person::setSurname(string surname) {
	this->surname = surname;
}

string Person::getSurname() {
	return this->surname;
}

void Person::setJMBG(string JMBG) {
	this->JMBG = JMBG;
}

string Person::getJMBG() {
	return this->JMBG;
}

void Person::setAge(int age) {
	this->age = age;
}

int Person::getAge() {
	return this->age;
}

Person::~Person() {
}