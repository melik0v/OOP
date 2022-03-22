
#include "Plant.h"
#pragma once// Требеутся описание класса plant

#include <fstream>
using namespace std;

	// дерево
	class tree : public plant {
		int age; // возраст
		char name[50]; // название
	public:
		// переопределяем интерфейс класса
		void InData(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		void OutTree(ofstream& ofst);
		tree() {  } // создание без инициализации.
		int consonants();
	};


