#pragma once
#include "Person.h"

class Coach : public Person {
private:
	int yearsOfExperience;
	float salary;

public:
	Coach();
	Coach(string name, string surname, string JMBG, int age, int yearsOfExperience, float salary);

	void setYearsOfExperience(int yearsOfExperience);
	int getYearsOfExperience();
	void setSalary(float salary);
	float getSalary();

	void toString() override;

	~Coach();
};