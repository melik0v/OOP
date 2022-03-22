#pragma once
#include "Plant.h"
#include <fstream>
class flower: public plant {
	enum type {
		HOME = 1,
		GARDEN,
		WILD,
	};
	type tof; // type of flower

public:
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
};