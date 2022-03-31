#include <fstream>
#include "Tree.h"
#include <string>
#define WRONG_AGE -1
using namespace std;
	// ¬вод параметров пр€моугольника
	void tree::InData(ifstream& ifst) {
		string temp;
		ifst >> temp;
		bool valid = true;
		for (int i = 0; i < temp.length(); i++)
		{
			if (!isdigit(temp[i]) || i > 9)
			{
				age = WRONG_AGE;
				valid = false;
				break;
			}
		}
		if (valid)
			age = stoi(temp);
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

	

	void tree::OutTree(ofstream& ofst) {
		if (age == WRONG_AGE)
		{
			ofst << "It is Tree: wrong age, ";
		}
		else
		{
			ofst << "It is Tree: age = " << age << ", name = " << name << endl;
		}
		
	}

