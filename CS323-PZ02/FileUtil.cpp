#include "FileUtil.h"

list<Coach> FileUtil::readCoaches(const string& fileName) {
	list<Coach> coaches;

	ifstream file;
	file.open(fileName);

	if (!file) {
		cout << "Error in opening file" << endl;
		return coaches;
	}

	string line;
	while (getline(file, line)) {
		string name, surname, JMBG, age, yearsOfExperience, salary;

		stringstream s(line);
		getline(s, name, ' ');
		getline(s, surname, ' ');
		getline(s, JMBG, ' ');
		getline(s, age, ' ');
		getline(s, yearsOfExperience, ' ');
		getline(s, salary, ' ');

		Coach* coach = new Coach();
		coach->setName(name);
		coach->setSurname(surname);
		coach->setJMBG(JMBG);
		coach->setAge(stoi(age));
		coach->setYearsOfExperience(stoi(yearsOfExperience));
		coach->setSalary(stof(salary));

		coaches.push_back(*coach);
	}

	file.close();

	return coaches;
}