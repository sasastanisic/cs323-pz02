#pragma once
#include "Coach.h"
#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <sstream>
using namespace std;

class FileUtil {
public:
	static list<Coach> readCoaches(const string& fileName);
};