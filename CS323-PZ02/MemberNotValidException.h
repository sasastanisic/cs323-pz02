#pragma once
#include <iostream>
using namespace std;

class MemberNotValidException {
private:
	string errorMessage;

public:
	MemberNotValidException(string message) :errorMessage(message) {};

	string getErrorMessage() {
		return this->errorMessage;
	}
};