#include "Flower.h"


void flower::InData(ifstream& ifst) {
	int temp;
	ifst >> temp;
	tof = (flower::type)temp;
	plant::InData(ifst);
}

// Output function for flower
void flower::Out(ofstream& ofst) {
	
	switch (tof)
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
	plant::Out(ofst);
}