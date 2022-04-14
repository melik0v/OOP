#pragma once
#ifndef __Container__
#define __Container__
#include "Plant.h"

		// ���������� ��������� �� ������ ����������� �������
		class container {
		public:
			struct Node
			{
				plant* plant;
				Node* Next;
				Node* Prev;
			};

			void In(ifstream& ifst); // ����
			void Out(ofstream& ofst); // �����
			container(); // ������������� ����������
			~container(); // ���������� ����������
			void sort();
			
			void swap(Node* first, Node* second);
			void OutTree(ofstream& ofst);

			Node* First;
			Node* Last;
			size_t SizeList;
	};

#endif