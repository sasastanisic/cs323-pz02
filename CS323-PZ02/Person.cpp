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
	if (!containsOnlyLetters(name)) {
		throw MemberNotValidException("Name should contain only letters!");
	}

	this->name = name;
}

string Person::getName() {
	return this->name;
}

void Person::setSurname(string surname) {
	if (!containsOnlyLetters(surname)) {
		throw MemberNotValidException("Surname should contain only letters!");
	}

	this->surname = surname;
}

string Person::getSurname() {
	return this->surname;
}

void Person::setJMBG(string JMBG) {
	if (JMBG.size() != 13 || !containsOnlyDigits(JMBG)) {
		throw MemberNotValidException("JMBG needs to have 13 digits!");
	}

	this->JMBG = JMBG;
}

string Person::getJMBG() {
	return this->JMBG;
}

void Person::setAge(int age) {
	if (age < 10 || age > 100 || !containsOnlyDigits(to_string(age))) {
		throw MemberNotValidException("Age isn't valid!");
	}

	this->age = age;
}

int Person::getAge() {
	return this->age;
}

bool Person::containsOnlyLetters(string str) {
	for (char ch : str) {
		if (!isalpha(ch)) {
			return false;
		}
	}

	return true;
}

bool Person::containsOnlyDigits(string num) {
	for (char ch : num) {
		if (!isdigit(ch)) {
			return false;
		}
	}

	return true;
}

Person::~Person() {
}