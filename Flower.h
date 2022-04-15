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
	// Multimethods
	void MultiMethod(Plant* other, ofstream& fout);
	void MultiMethodTree(ofstream& fout);
	void MultiMethodBush(ofstream& fout);
	void MultiMethodFlower(ofstream& fout);

	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
};