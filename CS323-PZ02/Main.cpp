#include "Gym.h"
#include "Util.h"
#include <iostream>
#include <string>
using namespace std;

void runProgram() {
	Gym* gym = new Gym("SaleGym", "Toplicka 37/16, Kursumlija", "4356723901", 10, 2500);

	Util::welcomeMenu();
	gym->showInfo();

	Person* p1 = new Member();
	Person* p2 = new Coach();
	Member* member = dynamic_cast<Member*>(p1);
	Coach* coach = dynamic_cast<Coach*>(p2);

	try {

		while (true) {
			try {
				Util::create(member);
				break;
			}
			catch (runtime_error& ex) {
				cout << ex.what() << endl;
			}
		};

		member->toString();
		cout << "   >>   We're glad to have you as a new member of the gym!   <<   \n" << endl;

		Util::showMenu();
	}
	catch (runtime_error& ex) {
		cout << ex.what() << endl;
		return;
	}

	delete member;
	delete coach;
	delete gym;
}

int main() {

	runProgram();

	return 0;
}