#pragma once
// “ребуетс€ описание класса shape
#include "Plant.h"

	// кустарник
	class bush : public plant {
		enum Month
		{
			JANUARY = 1,
			FEBRUARY,
			MARCH,
			APRIL,
			MAY,
			JUNE,
			JULY,
			AUGUST,
			SEPTEMBER,
			OCTOBER,
			NOVEMBER,
			DECEMBER,
		};
		Month mof; // Month of flowering - мес€ц цветени€
		char name[50]; // название
	public:
		// мельтиметоды
		void Multi_Method(plant* other, ofstream& fout);
		void Multi_Method_Tree(ofstream& fout);
		void Multi_Method_Bush(ofstream& fout);
		// переопредел€ем интерфейс класса
		void InData(ifstream& ifst); // ввод
		void Out(ofstream& ofst); // вывод
		bush() {} // создание без инициализации.
	};