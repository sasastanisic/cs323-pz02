#include "Weight.h"

Weight::Weight() {
	this->name = "";
	this->minWeight = 0;
	this->maxWeight = 0;
	this->weightType = WeightType::Barbell;
}

Weight::Weight(string name, float minWeight, float maxWeight, WeightType weightType) : name(name), weightType(weightType) {
	this->minWeight = minWeight;
	this->maxWeight = maxWeight;
}

void Weight::setName(string name) {
	this->name = name;
}

string Weight::getName() {
	return this->name;
}

void Weight::setMinWeight(float minWeight) {
	this->minWeight = minWeight;
}

float Weight::getMinWeight() {
	return this->minWeight;
}

void Weight::setMaxWeight(float maxWeight) {
	this->maxWeight = maxWeight;
}

float Weight::getMaxWeight() {
	return this->maxWeight;
}

void Weight::setWeightType(WeightType weightType) {
	this->weightType = weightType;
}

WeightType Weight::getWeightType() {
	return this->weightType;
}

void Weight::toString() {
	cout << "> " << this->name << ", minimum weight: " << this->minWeight << " kg, maximum weight: "
		<< this->maxWeight << " kg, type: " << printWeightType();
}

string Weight::printWeightType() {
	if (this->weightType == WeightType::Barbell) {
		return "Barbell";
	}
	else if (this->weightType == WeightType::Dumbell) {
		return "Dumbbell";
	}
	else if (this->weightType == WeightType::Machine) {
		return "Machine";
	}

	return "Incorrect weight type";
}

Weight::~Weight() {
}