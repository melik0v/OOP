#include "Tree.h"
using namespace std;
	// ¬вод параметров пр€моугольника
	void tree::InData(ifstream& ifst) {
		ifst >> age >> name;
	}
	void tree::Out(ofstream& ofst) {
		ofst << "It is Tree: age = " << age
			<< ", name = " << name << endl;
	}

	void tree::Multi_Method(plant* other, ofstream& ofst)
	{
		other->Multi_Method_Tree(ofst);
	}
	void tree::Multi_Method_Tree(ofstream& ofst)
	{
		ofst << "Tree and Tree" << endl;
	}
	void tree::Multi_Method_Bush(ofstream& ofst)
	{
		ofst << "Bush and Tree" << endl;
	}