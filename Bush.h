#pragma once
// ��������� �������� ������ shape
#include "Plant.h"

	// ���������
	class bush : public plant {
	public:
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
	
		// �������������� ��������� ������
		void InData(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		bush() {} // �������� ��� �������������.
	};