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

list<Weight> FileUtil::readWeights(const string& fileName) {
	list<Weight> weights;

	ifstream file;
	file.open(fileName);

	if (!file) {
		cout << "Error in opening file" << endl;
		return weights;
	}

	string line;
	while (getline(file, line)) {
		string name, minWeight, maxWeight, weightType;

		stringstream s(line);
		getline(s, name, ' ');
		getline(s, minWeight, ' ');
		getline(s, maxWeight, ' ');
		getline(s, weightType, ' ');

		for (int i = 0; name[i] != '\0'; i++) {
			if (name[i] == '_') {
				name[i] = ' ';
			}
		}

		map<string, WeightType> typeMap = {
			{"Barbell", WeightType::Barbell},
			{"Dumbbell", WeightType::Dumbell},
			{"Machine", WeightType::Machine}
		};

		Weight* weight = new Weight();
		weight->setName(name);
		weight->setMinWeight(stof(minWeight));
		weight->setMaxWeight(stof(maxWeight));
		weight->setWeightType(typeMap[weightType]);

		weights.push_back(*weight);
	}

	file.close();

	return weights;
}