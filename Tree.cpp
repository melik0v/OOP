#include "Tree.h"
using namespace std;
	// ���� ���������� ��������������
	void tree::InData(ifstream& ifst) {
		ifst >> age >> name;
	}
	void tree::Out(ofstream& ofst) {
		ofst << "It is Tree: age = " << age
			<< ", name = " << name << endl;
	}
