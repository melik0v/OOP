#include "Plant.h"
// ���������� ���������� ���������� ��� ���� ���������
// �������������� �������
#include "Tree.h"
#include "Bush.h"
using namespace std;

	// ���� ���������� ��������
	plant* plant::In(ifstream& ifst) {
		plant* pt;
		int k;
		ifst >> k;
		switch (k) {
		case 1:
			pt = new tree;
			break;
		case 2:
			pt = new bush;
			break;
		default:
			return 0;
		}
		pt->InData(ifst);
		return pt;
	}
