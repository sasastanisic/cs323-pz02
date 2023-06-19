#include "Gym.h"
#include "Member.h"
#include "Coach.h"
#include "FileUtil.h"
#include <iostream>
#include <string>
using namespace std;

void welcomeMenu() {
	cout << "   >>   Welcome to SaleGym!   <<   \n" << endl;
	cout << "According to some of your characteristics, we will give you useful tips and training instructions" << endl;
	cout << "--------------------------------------------------------------------------------------------------\n" << endl;
}

void create(Member* m) {
	string name, surname, JMBG;
	int age;
	float height, weight;

	cout << "Enter your name:" << endl << "--> ";
	getline(cin, name);
	m->setName(name);

	cout << "Enter your surname:" << endl << "--> ";
	getline(cin, surname);
	m->setSurname(surname);

	cout << "Enter your JMBG:" << endl << "--> ";
	getline(cin, JMBG);
	m->setJMBG(JMBG);

	cout << "How old are you?" << endl << "--> ";
	cin >> age;
	m->setAge(age);

	cout << "Enter height in cm:" << endl << "--> ";
	cin >> height;
	m->setHeight(height);

	cout << "Enter weight in kg:" << endl << "--> ";
	cin >> weight;
	m->setWeight(weight);

	cout << endl;
}

int main() {

	Gym* gym = new Gym("SaleGym", "Toplicka 37/16, Kursumlija", "4356723901", 10, 2500);

	welcomeMenu();
	gym->showInfo();

	Person* p1 = new Member();
	Person* p2 = new Coach();
	Member* member = dynamic_cast<Member*>(p1);
	Coach* coach = dynamic_cast<Coach*>(p2);

	create(member);
	member->toString();

	cout << "   >>   We're glad to have you as a new member of the gym!   <<   \n" << endl;

	list<Coach> coaches = FileUtil::readCoaches("coaches.txt");

	cout << "Coaches are:\n" << "---------------------------" << endl;
	for (Coach& coach : coaches) {
		coach.toString();
	}

	delete member;
	delete gym;

	return 0;
}