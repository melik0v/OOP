#include "Plant.h"
// Необходима подключить информацию обо всех имеющихся
// геометрических фигурах
#include "Tree.h"
#include "Bush.h"
#include "Flower.h"
#include <string>
#include <iostream>
#define WRONG_HABITAT 0
#define WRONG_PLANT 0
using namespace std;

void plant::InData(ifstream& ifst) // ввод
{

	//getline(ifst, name, ' ');
	int tmp;
	ifst >> name >> tmp;
	if (ifst.fail())
	{
		hbt = (plant::habitat)WRONG_HABITAT;
	}
	hbt = (plant::habitat)tmp;
}
void plant::Out(ofstream& ofst) // вывод	
{
	ofst << "Name = " << name << ", ";
	switch (hbt)
	{
	case TUNDRA:
		ofst << "Habitat = tundra";
		break;
	case DESERT:
		ofst << "Habitat = desert";
		break;
	case STEPPE:
		ofst << "Habitat = steppe";
		break;
	default:
		ofst << "Wrong habitat" << endl;
		break;
	}
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
			cout << "Wrong plant!" << endl;
			return 0;
		}
		pt->InData(ifst);

		return pt;
	}
	
