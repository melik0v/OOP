#include "Plant.h"
// Необходима подключить информацию обо всех имеющихся
// геометрических фигурах
#include "Tree.h"
#include "Bush.h"
#include "Flower.h"
<<<<<<< Updated upstream
=======
#include "WrongPlant.h"
#include <string>
>>>>>>> Stashed changes
#include <iostream>
using namespace std;

void plant::InData(ifstream& ifst) // ввод
{
<<<<<<< Updated upstream
	int tmp;
	ifst >> tmp;
	hbt = (plant::habitat)tmp;
=======
	//getline(ifst, name, ' ');
	int tmp;
	ifst >> name >> tmp;
	if (ifst.fail())
	{
		hbt = (plant::habitat)WRONG_HABITAT;
	}
	hbt = (plant::habitat)tmp;
	
		
>>>>>>> Stashed changes
}
void plant::Out(ofstream& ofst) // вывод	
{
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
		ifst >> k;
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
<<<<<<< Updated upstream
			cout << "Wrong input" << endl;
=======
			cout << "Wrong plant!" << endl;
>>>>>>> Stashed changes
			return 0;
		}
		pt->InData(ifst);

		return pt;
	}
	
