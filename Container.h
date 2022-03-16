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

		private:
			Node* First;
			Node* Last;
			size_t SizeList;
	};

#endif