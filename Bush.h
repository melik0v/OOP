#pragma once
// ��������� �������� ������ shape
#include "Plant.h"

	// ���������
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
		Month mof; // Month of flowering - ����� ��������
		char name[50]; // ��������
	public:
		// ������������
		void Multi_Method(plant* other, ofstream& fout);
		void Multi_Method_Tree(ofstream& fout);
		void Multi_Method_Bush(ofstream& fout);
		// �������������� ��������� ������
		void InData(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		bush() {} // �������� ��� �������������.
	};