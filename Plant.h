#pragma once
#include <string>
#include <fstream>
using namespace std;

	//  ласс, обобщающает все имеющиес€ фигуры.
	// явл€етс€ абстрактным, обеспечива€, тем самым,
	// проверку интерфейса
	class plant {
	public:
		enum habitat {
			TUNDRA = 1, DESERT, STEPPE,
		};
		habitat hbt;
	
		string name;
		// иденитфикаци€, порождение и ввод фигуры из потока
		static plant* In(ifstream& ifst);
		bool compare(plant second);
		virtual void InData(ifstream& ifst); // ввод
		virtual void Out(ofstream& ofst); // вывод
		virtual void OutTree(ofstream& ofst) {};
		virtual int consonants();
		plant() { };
	};
