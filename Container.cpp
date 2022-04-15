#include "Container.h"

	container::container() 
	{
		First = NULL;
		Last = First;
		SizeList = 0;
	}

	container::~container() 
	{
		Node* Temp = NULL;
		while (SizeList > 1)
		{
			Temp = Last->Prev;
			delete Last;
			Last = Temp;
			SizeList--;
		}
		if (SizeList == 1)
			delete First;
		SizeList--;
	}

	void container::In(ifstream& ifst)
	{
		Node* Temp;
		while (!ifst.eof())
		{
			Temp = new Node;
			Temp->Next = NULL;
			Temp->plant = plant::In(ifst); 

			if (Temp->plant == NULL)
				break;

			if (First == NULL)
			{
				First = Last = Temp;
				Temp->Prev = Temp;
				Temp->Next = First;
			}
			else
			{
				Temp->Prev = Last;
				Last->Next = Temp;
				Temp->Next = First;
				Last = Temp;
			}
			SizeList++;
		}
	}

	void container::Out(ofstream& ofst)
	{
		Node* Temp = First;
		ofst << "List contains " << SizeList << " elements" << endl;

		for (int i = 0; i < SizeList; i++)
		{
			ofst << i + 1 << ": ";
			Temp->plant->Out(ofst);
			Temp = Temp->Next;
		}
		ofst << endl;
	}

	void container::Multi_Method(ofstream& ofst)
	{
		Node* current_first = First;
		Node* current_second = current_first->Next;

		ofst << "Multimethod." << endl;
		for (int i = 0; i < SizeList - 1; i++)
		{
			for (int j = i + 1; j < SizeList; j++)
			{
				current_first->plant->Multi_Method(current_second->plant, ofst);
				current_first->plant->Out(ofst);
				current_second->plant->Out(ofst);
				current_second = current_second->Next;
			}
			current_first = current_first->Next;
			current_second = current_first->Next;
		}
	}