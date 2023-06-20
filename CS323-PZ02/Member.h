#pragma once
#include "Person.h"

class Member : public Person {
private:
	float height;
	float weight;

public:
	Member();
	Member(string name, string surname, string JMBG, int age, float height, float weight);

	void setHeight(float height);
	float getHeight();
	void setWeight(float weight);
	float getWeight();

	float calculateBMI();
	string checkYourShape(float bmiValue);

	void toString() override;

	~Member();
};