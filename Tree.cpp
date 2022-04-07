#include <fstream>
#include "Tree.h"
#include <string>
#define WRONG_AGE -1
using namespace std;
// ¬вод параметров пр€моугольника
void Tree::InData(ifstream& ifst) 
{
	string temp;
	ifst >> temp;
	bool valid = true;
	for (int i = 0; i < temp.length(); i++)
	{
		if (!isdigit(temp[i]) || i > 9)
		{
			_age = WRONG_AGE;
			valid = false;
			break;
		}
	}
	if (valid)
	{
		_age = stoi(temp);
	}
	Plant::InData(ifst);
}
void Tree::Out(ofstream& ofst) 
{
	if (_age == WRONG_AGE)
	{
		ofst << "It is Tree: wrong _age, ";
	}
	else
	{
		ofst << "It is Tree: _age = " << _age << ", ";
	}

	Plant::Out(ofst);
}



void Tree::OutTree(ofstream& ofst) {
	if (_age == WRONG_AGE)
	{
		ofst << "It is Tree: wrong _age, ";
	}
	else
	{
		ofst << "It is Tree: _age = " << _age << ", _name = " << _name << endl;
	}
}

