#include "Flower.h"

void Flower::InData(ifstream& ifst) 
{
	int temp;
	ifst >> temp;
	_tof = (Flower::Type)temp;
	Plant::InData(ifst);
}

// Output function for flower
void Flower::Out(ofstream& ofst) 
{
	switch (_tof)
	{
	case (HOME):
		ofst << "It is Flower: type = " << "Home" << ", ";
		break;
	case (GARDEN):
		ofst << "It is Flower: type = " << "Garden" << ", ";
		break;
	case (WILD):
		ofst << "It is Flower: type = " << "Wild" << ", ";
		break;
	}
	Plant::Out(ofst);
}

void Flower::MultiMethod(Plant* other, ofstream& ofst)
{
	other->MultiMethodFlower(ofst);
}
void Flower::MultiMethodTree(ofstream& ofst)
{
	ofst << "Tree and Flower" << endl;
}
void Flower::MultiMethodBush(ofstream& ofst)
{
	ofst << "Bush and Flower" << endl;
}
void Flower::MultiMethodFlower(ofstream& ofst)
{
	ofst << "Flower and Flower" << endl;
}