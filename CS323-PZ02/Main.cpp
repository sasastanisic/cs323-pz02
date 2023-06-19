#include "Gym.h"
#include <iostream>
using namespace std;

void welcomeMenu() {
	cout << "   >>   Welcome to SaleGym!   <<   \n" << endl;
	cout << "According to some of your characteristics, we will give you useful tips and training instructions" << endl;
	cout << "-------------------------------------------------------------------------------------------------\n" << endl;
}

void displayGymInfo(Gym* gym) {
	gym->setName("SaleGym");
	gym->setAddress("Toplicka 37/16, Kursumlija");
	gym->setTIN("4356723901");
	gym->setNumberOfEmployees(10);
	gym->setMembershipFeePrice(2500);

	gym->showInfo();
}

int main() {

	Gym* gym = new Gym();

	welcomeMenu();
	displayGymInfo(gym);

	return 0;
}