#include "Util.h"

void Util::create(Member* m) {
	string name, surname, JMBG;
	int age;
	float height, weight;

	try {

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

	}
	catch (MemberNotValidException& ex) {
		cout << ex.getErrorMessage() << endl;
	}

	cout << endl;
}