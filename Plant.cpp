#include "Plant.h"
// Необходима подключить информацию обо всех имеющихся
// геометрических фигурах
#include "Tree.h"
#include "Bush.h"
#include "Flower.h"
#include <string>
using namespace std;
#define WRONG_PLANT 0
#define WRONG_HABITAT 0

void plant::InData(ifstream& ifst) // ввод
{
	//getline(ifst, name, ' ');
	ifst >> name;
	string tmp = "";
	getline(ifst, tmp, '\n');
	if (tmp != "\0")
		hbt = (plant::habitat)stoi(tmp);
	else
		hbt = (plant::habitat)WRONG_HABITAT;
}

void plant::Out(ofstream& ofst) // вывод	
{	
	ofst << "Name = " << name << ", ";
	switch (hbt)
	{
	case TUNDRA:
		ofst << "Habitat = tundra" << endl;
		break;
	case DESERT:
		ofst << "Habitat = desert" << endl;
		break;
	case STEPPE:
		ofst << "Habitat = steppe" << endl;
		break;
	default:
		ofst << "Wrong habitat " << endl;
		break;
	}
	ofst << "Consonants = " << consonants() << endl;
}

	// Ввод параметров растения
	plant* plant::In(ifstream& ifst) {
		plant* pt;
		int k;
		string tmp;
		ifst >> tmp;

		if (tmp == "\0")
			return 0;
		if (!isdigit(int(tmp.front())) || tmp.length() > 1)
			k = WRONG_PLANT;
		else
			k = stoi(tmp);

		switch (k) {
		case 1:
			pt = new tree;
			break;
		case 2:
			pt = new bush;
			break;
		case 3:
			pt = new flower;
			break;
		default:
			return 0;
		}
		pt->InData(ifst);
		return pt;
	}
	
	int plant::consonants() {

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