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
		ofst << "It is Tree: wrong age, ";
	}
	else
	{
		ofst << "It is Tree: age = " << _age << ", ";
	}

	Plant::Out(ofst);
}



void Tree::OutTree(ofstream& ofst) {
	if (_age == WRONG_AGE)
	{
		ofst << "It is Tree: wrong age, ";
	}
	else
	{
		ofst << "It is Tree: age = " << _age << ", Name = " << _name << endl;
	}
}


void Tree::MultiMethod(Plant* other, ofstream& ofst)
{
	other->MultiMethodTree(ofst);
}
void Tree::MultiMethodTree(ofstream& ofst)
{
	ofst << "Tree and Tree" << endl;
}
void Tree::MultiMethodBush(ofstream& ofst)
{
	ofst << "Bush and Tree" << endl;
}
void Tree::MultiMethodFlower(ofstream& ofst)
{
	ofst << "Flower and Tree" << endl;
}
