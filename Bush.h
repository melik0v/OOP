#pragma once
// “ребуетс€ описание класса shape
#include "Plant.h"

	// кустарник
class Bush : public Plant {
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
	Month _mof; // Month of flowering - мес€ц цветени€
public:
	// переопредел€ем интерфейс класса
	void InData(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод
	Bush() {} // создание без инициализации.
};