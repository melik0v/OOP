#include "Plant.h"
#include <fstream>
#pragma once
using namespace std;
// ������
class Tree : public Plant {
	int _age; // �������
public:
	// �������������� ��������� ������
	void InData(ifstream& ifst); // ����
	void Out(ofstream& ofst); // �����
	void OutTree(ofstream& ofst);
	Tree() {} // �������� ��� �������������.
};


