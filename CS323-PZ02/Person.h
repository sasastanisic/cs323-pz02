#pragma once
#include "MemberNotValidException.h"
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
	string name;
	string surname;
	string JMBG;
	int age;

public:
	Person();
	Person(string name, string surname, string JMBG, int age);

	void setName(string name);
	string getName();
	void setSurname(string surname);
	string getSurname();
	void setJMBG(string JMBG);
	string getJMBG();
	void setAge(int age);
	int getAge();

	virtual void toString() = 0;
	virtual bool containsOnlyLetters(string str);
	virtual bool containsOnlyDigits(string num);

	virtual ~Person();
};