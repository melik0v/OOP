#include "Tree.h"
using namespace std;
	// ���� ���������� ��������������
	void tree::InData(ifstream& ifst) {
		ifst >> age >> name;
		plant::InData(ifst);
	}
	void tree::Out(ofstream& ofst) {
		ofst << "It is Tree: age = " << age
			<< ", name = " << name << ", ";
		plant::Out(ofst);
		ofst << endl;
	}
