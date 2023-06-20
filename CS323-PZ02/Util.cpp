#include "Util.h"

void Util::welcomeMenu() {
	cout << "   >>   Welcome to SaleGym!   <<   \n" << endl;
	cout << "According to some of your characteristics, we will give you useful tips and training instructions" << endl;
	cout << "--------------------------------------------------------------------------------------------------\n" << endl;
}

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
		cout << ex.getErrorMessage();
		throw runtime_error("\n");
	}

	cout << endl;
}

void Util::showMenu() {
	char choice;
	bool exitMenu = false;

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

	}
	catch (runtime_error& ex) {
		cout << ex.what() << endl;
		return;
	}

	do {
		cout << "   >>   Choose an option from the menu:   <<   " << endl;
		cout << "-----------------------------------------------" << endl;
		cout << "> 1 - View weights" << endl;
		cout << "> 2 - Calculate BMI" << endl;
		cout << "> 3 - View coaches" << endl;
		cout << "> 4 - Check your shape" << endl;
		cout << "> 5 - Exit" << endl;
		cout << "-----------------------------------------------" << endl;
		cout << "--> ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case '1': {
			list<Weight> weights = FileUtil::readWeights("weights.txt");

			cout << "Weights are:\n" << "---------------------------" << endl;
			for (Weight& weight : weights) {
				weight.toString();
			}

			cout << "\n" << endl;
			break;
		}
		case '2': {
			float bmiValue = member->calculateBMI();
			cout << "Your BMI value is --> " << setprecision(3) << bmiValue << endl;

			cout << "\n" << endl;
			break;
		}
		case '3': {
			list<Coach> coaches = FileUtil::readCoaches("coaches.txt");

			cout << "Coaches are:\n" << "---------------------------" << endl;
			for (Coach& coach : coaches) {
				coach.toString();
			}

			cout << "\n" << endl;
			break;
		}
		case '4': {
			string advice = member->checkYourShape(member->calculateBMI());
			cout << "Form check --> " << advice << endl;

			cout << "\n" << endl;
			break;
		}
		case '5':
			exitMenu = true;
			cout << "   >>   Thank you for visiting SaleGym!   <<   " << endl;
			break;
		default:
			cout << "Invalid choice. Please try again.\n" << endl;
			break;
		}

	} while (!exitMenu);

	delete member;
	delete coach;
}