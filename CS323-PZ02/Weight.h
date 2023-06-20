#pragma once
#include <iostream>
#include <string>
using namespace std;

enum class WeightType {
	Barbell, Dumbell, Machine
};

class Weight {
private:
	string name;
	float minWeight;
	float maxWeight;
	WeightType weightType;

public:
	Weight();
	Weight(string name, float minWeight, float maxWeight, WeightType weightType);

	void setName(string name);
	string getName();
	void setMinWeight(float minWeight);
	float getMinWeight();
	void setMaxWeight(float maxWeight);
	float getMaxWeight();
	void setWeightType(WeightType weightType);
	WeightType getWeightType();

	void toString();
	string printWeightType();

	~Weight();
};