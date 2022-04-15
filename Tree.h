#include "Plant.h"
#include <fstream>
#pragma once
using namespace std;
// ������
class Tree : public Plant {
	int _age; // �������
public:
	// Multimethods
	void MultiMethod(Plant* other, ofstream& fout);
	void MultiMethodTree(ofstream& fout);
	void MultiMethodBush(ofstream& fout);
	void MultiMethodFlower(ofstream& fout);
	// �������������� ��������� ������
	void InData(ifstream& ifst); // ����
	void Out(ofstream& ofst); // �����
	void OutTree(ofstream& ofst);
	Tree() {} // �������� ��� �������������.
};


