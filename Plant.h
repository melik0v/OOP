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

		virtual void Multi_Method(plant* other, ofstream& fout) {};
		virtual void Multi_Method_Tree(ofstream& fout) {};
		virtual void Multi_Method_Bush(ofstream& fout) {};
	};
