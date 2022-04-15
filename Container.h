#pragma once
#ifndef __Container__
#define __Container__
#include "Plant.h"

// ѕростейший контейнер на основе одномерного массива
class Container {
	struct Node
	{
		Plant* _plant;
		Node* _next;
		Node* _prev;
	};


public:
	void In(ifstream& ifst); // ввод
	void Out(ofstream& ofst); // вывод
	Container(); // инициализаци€ контейнера
	~Container(); // утилизаци€ контейнера
	void MultiMethod(ofstream& ofst);
	void Sort();
	bool Compare(Plant* first, Plant* second);
	void Swap(Node* first, Node* second);

private:
	Node* _first;
	Node* _last;
	size_t _sizeList;
};

#endif