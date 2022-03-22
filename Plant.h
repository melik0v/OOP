#pragma once

#include <fstream>
using namespace std;

	//  ласс, обобщающает все имеющиес€ фигуры.
	// явл€етс€ абстрактным, обеспечива€, тем самым,
	// проверку интерфейса
	class plant {
		enum habitat {
			TUNDRA = 1, DESERT, STEPPE,
		};
		habitat hbt;
	public:
		// иденитфикаци€, порождение и ввод фигуры из потока
		static plant* In(ifstream& ifst);
		virtual void InData(ifstream& ifst); // ввод
		virtual void Out(ofstream& ofst); // вывод
		virtual int consonants() { return 0; };
		virtual void OutTree(ofstream& ofst) { ofst << endl; }
	protected:
		plant() { };
	};
