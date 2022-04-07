#include "Plant.h"
#include <fstream>
#pragma once
using namespace std;
// дерево
class Tree : public Plant {
	int _age; // возраст
public:
	// переопредел€ем интерфейс класса
	void InData(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод
	void OutTree(ofstream& ofst);
	Tree() {} // создание без инициализации.
};


