#pragma once
#include <string>
#include <fstream>
using namespace std;

//  ласс, обобщающает все имеющиес€ фигуры.
// явл€етс€ абстрактным, обеспечива€, тем самым,
// проверку интерфейса
class Plant {
	enum Habitat
	{
		TUNDRA = 1,
		DESERT,
		STEPPE,
	};
	Habitat _hbt;
public:
	string _name;
	// иденитфикаци€, порождение и ввод фигуры из потока
	static Plant* In(ifstream& ifst);
	virtual void InData(ifstream& ifst); // ввод
	virtual void Out(ofstream& ofst); // вывод
	virtual int Consonants();
	virtual void OutTree(ofstream& ofst) { ofst << endl; }

	virtual void MultiMethod(Plant* other, ofstream& fout) {};
	virtual void MultiMethodTree(ofstream& fout) {};
	virtual void MultiMethodBush(ofstream& fout) {};
	virtual void MultiMethodFlower(ofstream& fout) {};

protected:
	Plant() { };
};
