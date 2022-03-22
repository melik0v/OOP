#include "Plant.h"
// Необходима подключить информацию обо всех имеющихся
// геометрических фигурах
#include "Tree.h"
#include "Bush.h"
#include "Flower.h"
using namespace std;

void plant::InData(ifstream& ifst) // ввод
{
	int tmp;
	ifst >> tmp;
	hbt = (plant::habitat)tmp;
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
			return 0;
		}
		pt->InData(ifst);

		return pt;
	}
	
