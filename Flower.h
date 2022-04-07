#pragma once
#include "Plant.h"
#include <fstream>
class Flower : public Plant
{
	enum Type
	{
		HOME = 1,
		GARDEN,
		WILD,
	};
	Type _tof; // type of flower

public:
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
};