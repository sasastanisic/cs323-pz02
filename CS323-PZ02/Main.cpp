#include "Gym.h"
#include "Util.h"
#include <iostream>
#include <string>
using namespace std;

void run() {
	Gym* gym = new Gym("SaleGym", "Toplicka 37/16, Kursumlija", "4356723901", 10, 2500);

	Util::welcomeMenu();
	gym->showInfo();

	Util::showMenu();

	delete gym;
}

int main() {

	run();

	return 0;
}