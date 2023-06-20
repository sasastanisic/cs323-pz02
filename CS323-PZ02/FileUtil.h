#pragma once
#include "Coach.h"
#include "Weight.h"
#include <iostream>
#include <string>
#include <list>
#include <map>
#include <fstream>
#include <sstream>
using namespace std;

class FileUtil {
public:
	static list<Coach> readCoaches(const string& fileName);
	static list<Weight> readWeights(const string& fileName);
};