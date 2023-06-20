#include "Gym.h"
#include "Util.h"
#include "FileUtil.h"
#include <iostream>
#include <string>
using namespace std;

void welcomeMenu() {
	cout << "   >>   Welcome to SaleGym!   <<   \n" << endl;
	cout << "According to some of your characteristics, we will give you useful tips and training instructions" << endl;
	cout << "--------------------------------------------------------------------------------------------------\n" << endl;
}

int main() {

	Gym* gym = new Gym("SaleGym", "Toplicka 37/16, Kursumlija", "4356723901", 10, 2500);

	welcomeMenu();
	gym->showInfo();

	Person* p1 = new Member();
	Person* p2 = new Coach();
	Member* member = dynamic_cast<Member*>(p1);
	Coach* coach = dynamic_cast<Coach*>(p2);

	Util::create(member);
	member->toString();

	cout << "   >>   We're glad to have you as a new member of the gym!   <<   \n" << endl;

	list<Coach> coaches = FileUtil::readCoaches("coaches.txt");

	cout << "Coaches are:\n" << "---------------------------" << endl;
	for (Coach& coach : coaches) {
		coach.toString();
	}

	cout << endl;

	list<Weight> weights = FileUtil::readWeights("weights.txt");

	cout << "Weights are:\n" << "---------------------------" << endl;
	for (Weight& weight : weights) {
		weight.toString();
	}

	delete member;
	delete coach;
	delete gym;

	return 0;
}