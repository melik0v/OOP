#pragma once
#include <string>
#include <fstream>
using namespace std;

// �����, ����������� ��� ��������� ������.
// �������� �����������, �����������, ��� �����,
// �������� ����������
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
	// �������������, ���������� � ���� ������ �� ������
	static Plant* In(ifstream& ifst);
	virtual void InData(ifstream& ifst); // ����
	virtual void Out(ofstream& ofst); // �����
	virtual int Consonants();
	virtual void OutTree(ofstream& ofst) { ofst << endl; }

	virtual void MultiMethod(Plant* other, ofstream& fout) {};
	virtual void MultiMethodTree(ofstream& fout) {};
	virtual void MultiMethodBush(ofstream& fout) {};
	virtual void MultiMethodFlower(ofstream& fout) {};

protected:
	Plant() { };
};
