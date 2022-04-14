#pragma once
#include <string>
#include <fstream>
using namespace std;

	// �����, ����������� ��� ��������� ������.
	// �������� �����������, �����������, ��� �����,
	// �������� ����������
	class plant {
	public:
		enum habitat {
			TUNDRA = 1, DESERT, STEPPE,
		};
		habitat hbt;
	
		string name;
		// �������������, ���������� � ���� ������ �� ������
		static plant* In(ifstream& ifst);
		bool compare(plant second);
		virtual void InData(ifstream& ifst); // ����
		virtual void Out(ofstream& ofst); // �����
		virtual void OutTree(ofstream& ofst) {};
		virtual int consonants();
		plant() { };
	};
