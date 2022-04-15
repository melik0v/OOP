
#include "Plant.h"
#pragma once// Требеутся описание класса plant

#include <fstream>
using namespace std;

	// дерево
	class tree : public plant {
		int age; // возраст
		char name[50]; // название
	public:
		// мультиметоды
		void Multi_Method(plant* other, ofstream& fout);
		void Multi_Method_Tree(ofstream& fout);
		void Multi_Method_Bush(ofstream& fout);
		// переопределяем интерфейс класса
		void InData(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		tree() {  } // создание без инициализации.
	};


