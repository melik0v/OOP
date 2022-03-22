#pragma once

#include <fstream>
using namespace std;

	// �����, ����������� ��� ��������� ������.
	// �������� �����������, �����������, ��� �����,
	// �������� ����������
	class plant {
		enum habitat {
			TUNDRA = 1, DESERT, STEPPE,
		};
		habitat hbt;
	public:
		// �������������, ���������� � ���� ������ �� ������
		static plant* In(ifstream& ifst);
		virtual void InData(ifstream& ifst); // ����
		virtual void Out(ofstream& ofst); // �����
		virtual int consonants() { return 0; };
		virtual void OutTree(ofstream& ofst) { ofst << endl; }
	protected:
		plant() { };
	};
