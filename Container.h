#pragma once
#ifndef __Container__
#define __Container__
#include "Plant.h"

		// ѕростейший контейнер на основе одномерного массива
		class container {
			struct Node
			{
				plant* plant;
				Node* Next;
				Node* Prev;
			};

			
		public:
			void In(ifstream& ifst); // ввод
			void Out(ofstream& ofst); // вывод
			container(); // инициализаци€ контейнера
			~container(); // утилизаци€ контейнера
			void sort();
			bool compare(plant* first, plant* second);
			void swap(Node* first, Node* second);

		private:
			Node* First;
			Node* Last;
			size_t SizeList;
	};

#endif