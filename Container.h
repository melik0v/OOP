#pragma once
#ifndef __Container__
#define __Container__
#include "Plant.h"

		// ѕростейший контейнер на основе одномерного массива
		class container {
		public:
			struct Node
			{
				plant* plant;
				Node* Next;
				Node* Prev;
			};

			void In(ifstream& ifst); // ввод
			void Out(ofstream& ofst); // вывод
			container(); // инициализаци€ контейнера
			~container(); // утилизаци€ контейнера
			void sort();
			
			void swap(Node* first, Node* second);
			void OutTree(ofstream& ofst);

			Node* First;
			Node* Last;
			size_t SizeList;
	};

#endif