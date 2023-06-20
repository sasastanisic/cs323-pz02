#pragma once
#include "Member.h"
#include "FileUtil.h"
#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
using namespace std;

class Util {
public:
	static void welcomeMenu();
	static void create(Member* m);
	static void showMenu();
};