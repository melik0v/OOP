#pragma once

#include <fstream>
using namespace std;

	// �����, ����������� ��� ��������� ������.
	// �������� �����������, �����������, ��� �����,
	// �������� ����������
	class plant {
	public:
		// �������������, ���������� � ���� ������ �� ������
		static plant* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0; // ����
		virtual void Out(ofstream& ofst) = 0; // �����
		virtual void OutTree(ofstream& ofst) { ofst << endl; }
	};
