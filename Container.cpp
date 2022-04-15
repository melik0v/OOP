#include "Container.h"

Container::Container()
{
	_first = NULL;
	_last = _first;
	_sizeList = 0;
}

Container::~Container()
{
	Node* temp = NULL;
	while (_sizeList > 1)
	{
		temp = _last->_prev;
		delete _last;
		_last = temp;
		_sizeList--;
	}
	if (_sizeList == 1)
		delete _first;
	_sizeList--;
}

void Container::In(ifstream& ifst)
{
	Node* temp;
	while (!ifst.eof())
	{
		temp = new Node;
		temp->_next = NULL;
		temp->_plant = Plant::In(ifst);

		if (temp->_plant == NULL)
			break;

		if (_first == NULL)
		{
			_first = _last = temp;
			temp->_prev = temp;
			temp->_next = _first;
		}
		else
		{
			temp->_prev = _last;
			_last->_next = temp;
			temp->_next = _first;
			_last = temp;
		}
		_sizeList++;
	}
}

void Container::Out(ofstream& ofst)
{
	Node* temp = _first;
	ofst << "List contains " << _sizeList << " elements" << endl;

	for (int i = 0; i < _sizeList; i++)
	{
		ofst << i + 1 << ": ";
		temp->_plant->Out(ofst);
		temp = temp->_next;
	}
	ofst << endl;

	for (int i = 0; i < _sizeList; i++) {
		ofst << i + 1 << ": ";
		temp->_plant->OutTree(ofst);
		temp = temp->_next;
	}

	ofst << endl;

}

void Container::Sort() 
{
	if (_sizeList < 2) 
	{
		return;
	}

	Node* current = _first;
	bool flag = false;

	do
	{
		current = _first;
		flag = false;
		for (int i = 0; i < (_sizeList - 1); ++i)
		{
			if (Compare(current->_plant, current->_next->_plant))
			{
				Swap(current, current->_next);
				flag = true;
			}
			else
			{
				current = current->_next;
			}
		}
	} while (flag);
}

bool Container::Compare(Plant* first, Plant* second) 
{
	return first->Consonants() > second->Consonants();
}

void Container::Swap(Node* first, Node* second) 
{
	Plant* temp;
	temp = first->_plant;
	first->_plant = second->_plant;
	second->_plant = temp;
	return;
}

void Container::MultiMethod(ofstream& ofst)
{
	Node* current_first = _first;
	Node* current_second = current_first->_next;

	ofst << "Multimethod." << endl;
	for (int i = 0; i < _sizeList - 1; i++)
	{
		for (int j = i + 1; j < _sizeList; j++)
		{
			current_first->_plant->MultiMethod(current_second->_plant, ofst);
			current_first->_plant->Out(ofst);
			current_second->_plant->Out(ofst);
			current_second = current_second->_next;
			ofst << endl;
		}
		current_first = current_first->_next;
		current_second = current_first->_next;
	}
}
