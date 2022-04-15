#include "Plant.h"
#include <fstream>
#pragma once
using namespace std;
// дерево
class Tree : public Plant {
	int _age; // возраст
public:
	// Multimethods
	void MultiMethod(Plant* other, ofstream& fout);
	void MultiMethodTree(ofstream& fout);
	void MultiMethodBush(ofstream& fout);
	void MultiMethodFlower(ofstream& fout);
	// переопредел€ем интерфейс класса
	void InData(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод
	void OutTree(ofstream& ofst);
	Tree() {} // создание без инициализации.
};


