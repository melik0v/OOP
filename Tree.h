
#include "Plant.h"
#pragma once// ��������� �������� ������ plant

#include <fstream>
using namespace std;

	// ������
	class tree : public plant {
		int age; // �������
		char name[50]; // ��������
	public:
		// ������������
		void Multi_Method(plant* other, ofstream& fout);
		void Multi_Method_Tree(ofstream& fout);
		void Multi_Method_Bush(ofstream& fout);
		// �������������� ��������� ������
		void InData(ifstream& ifst); // ����
		void Out(ofstream& ofst); // �����
		tree() {  } // �������� ��� �������������.
	};


