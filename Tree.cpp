#include "Tree.h"
#include <string>
using namespace std;
	// ¬вод параметров пр€моугольника
	void tree::InData(ifstream& ifst) {
		string temp;
		ifst >> temp >> name;
		if (isdigit(int(unsigned char(temp.front())))) {
			age = stoi(temp);
		}
		if (age < 0)
			age = -1;
		if (strlen(name) > 48)
			name[49] = '\0';
		plant::InData(ifst);
	}
	void tree::Out(ofstream& ofst) {
		if (age == -1)
			ofst << "Wrong age" << ", name = " << name << endl;
		else
			ofst << "It is Tree: age = " << age
				<< ", name = " << name << ", ";
		plant::Out(ofst);
		ofst << endl;
	}

	int tree::consonants() {

		char consonants[40] = { 'B', 'b', 'C', 'c', 'D', 'd', 'F', 'f', 'G', 'g', 'H', 'h', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'P', 'p', 'Q', 'q',
		'R', 'r', 'S', 's', 'T', 't', 'V', 'v', 'W', 'w', 'X', 'x', 'Z','z' };
		int count = 0;
		for (int i = 0; i < 50; i++)
		{
			if (name[i] == '\0')
				break;
			for (int j = 0; j < 40; j++)
			{
				if (name[i] == consonants[j]) {
					count++;
				}
			}
		}
		return count;
	}
	

	void tree::OutTree(ofstream& ofst) {
		ofst << "It is Tree: age = " << age
			<< ", name = " << name << endl;
	}

