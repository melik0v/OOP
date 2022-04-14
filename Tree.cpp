#include <fstream>
#include "Tree.h"
#include <string>
#define WRONG_AGE -1
using namespace std;
	// ¬вод параметров пр€моугольника
	void tree::InData(ifstream& ifst) {
		ifst >> age;
		plant::InData(ifst);
	}
	void tree::Out(ofstream& ofst) {
		if (age == WRONG_AGE)
		{
			ofst << "It is Tree: wrong age, ";
		}
		else
		{
			ofst << "It is Tree: age = " << age << ", ";
		}
		
		plant::Out(ofst);

	}


	void tree::OutTree(ofstream& ofst) 
	{
		tree::Out(ofst);
	}

