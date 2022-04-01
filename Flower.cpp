#include "Flower.h"
#define WRONG_FLOWER 0



void flower::InData(ifstream& ifst) {
	int temp;
	ifst >> temp;
	if (ifst.fail())
	{
		tof = (flower::type)WRONG_FLOWER;
	}
	else
	{
		tof = (flower::type)temp;
	}
	
}

// Output function for flower
void flower::Out(ofstream& ofst) {
	switch (tof)
	{
	case (HOME):
		ofst << "It is Flower: type = " << "Home" << endl;
		break;
	case (GARDEN):
		ofst << "It is Flower: type = " << "Garden" << endl;
		break;
	case (WILD):
		ofst << "It is Flower: type = " << "Wild" << endl;
		break;
	default:
		ofst << "Wrong type of flower" << endl;
		break;
	}
}