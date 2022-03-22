#include "Flower.h"


void flower::InData(ifstream& ifst) {
	int temp;
	ifst >> temp;
	tof = (flower::type)temp;
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
	}
}