#include "Gym.h"
#include "Member.h"
#include <iostream>
using namespace std;

void welcomeMenu() {
	cout << "   >>   Welcome to SaleGym!   <<   \n" << endl;
	cout << "According to some of your characteristics, we will give you useful tips and training instructions" << endl;
	cout << "-------------------------------------------------------------------------------------------------\n" << endl;
}

int main() {

	Gym* gym = new Gym("SaleGym", "Toplicka 37/16, Kursumlija", "4356723901", 10, 2500);

	welcomeMenu();
	gym->showInfo();

	Person* p1 = new Member();
	Member* member = dynamic_cast<Member*>(p1);
	member->setHeight(186);
	cout << member->getHeight() << endl;

	delete member;
	delete gym;

	return 0;
}