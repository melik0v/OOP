#pragma once
#ifndef __Container__
#define __Container__
#include "Plant.h"

		// ���������� ��������� �� ������ ����������� �������
		class container {
			struct Node
			{
				plant* plant;
				Node* Next;
				Node* Prev;
			};

			
		public:
			void In(ifstream& ifst); // ����
			void Out(ofstream& ofst); // �����
			container(); // ������������� ����������
			~container(); // ���������� ����������
			void sort();
			bool compare(plant* first, plant* second);
			void swap(Node* first, Node* second);

		private:
			Node* First;
			Node* Last;
			size_t SizeList;
	};

#endif