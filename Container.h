#pragma once
#ifndef __Container__
#define __Container__
#include "Plant.h"

// ���������� ��������� �� ������ ����������� �������
class Container {
	struct Node
	{
		Plant* _plant;
		Node* _next;
		Node* _prev;
	};


public:
	void In(ifstream& ifst); // ����
	void Out(ofstream& ofst); // �����
	Container(); // ������������� ����������
	~Container(); // ���������� ����������
	void Sort();
	bool Compare(Plant* first, Plant* second);
	void Swap(Node* first, Node* second);

private:
	Node* _first;
	Node* _last;
	size_t _sizeList;
};

#endif