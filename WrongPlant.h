#pragma once
#include <fstream>
#include "Plant.h"
using namespace std;


class WrongPlant : public plant {
public:
	void Out(ofstream& ofst);
	void InData(ifstream& ifst);
	WrongPlant() {};
};