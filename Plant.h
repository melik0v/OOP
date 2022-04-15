#pragma once

#include <fstream>
using namespace std;

	//  ласс, обобщающает все имеющиес€ фигуры.
	// явл€етс€ абстрактным, обеспечива€, тем самым,
	// проверку интерфейса
	class plant {
	public:
		// иденитфикаци€, порождение и ввод фигуры из потока
		static plant* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; // ввод
		virtual void Out(ofstream& ofst) = 0; // вывод

		virtual void Multi_Method(plant* other, ofstream& fout) {};
		virtual void Multi_Method_Tree(ofstream& fout) {};
		virtual void Multi_Method_Bush(ofstream& fout) {};
	};
