#pragma once
// ��������� �������� ������ shape
#include "Plant.h"

	// ���������
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
	Month _mof; // Month of flowering - ����� ��������
public:
	// Multimethods
	void MultiMethod(Plant* other, ofstream& fout);
	void MultiMethodTree(ofstream& fout);
	void MultiMethodBush(ofstream& fout);
	void MultiMethodFlower(ofstream& fout);
	// �������������� ��������� ������
	void InData(ifstream& ifst); // ����
	void Out(ofstream& ofst); // �����
	Bush() {} // �������� ��� �������������.
};