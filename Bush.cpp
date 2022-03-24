#include "Bush.h"
using namespace std;

int bush::consonants() {

	char consonants[40] = { 'B', 'b', 'C', 'c', 'D', 'd', 'F', 'f', 'G', 'g', 'H', 'h', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'P', 'p', 'Q', 'q',
	'R', 'r', 'S', 's', 'T', 't', 'V', 'v', 'W', 'w', 'X', 'x', 'Z','z' };
	int count = 0;
	for (int i = 0; i < 50; i++)
	{
		if (name[i] == '\0')
			break;
		for (int j = 0; j < 40; j++)
		{
			if (name[i] == consonants[j]) {
				count++;
			}
		}
	}
	return count;
}

	// Ввод параметров кустарника
	void bush::InData(ifstream& ifst) {
		int temp;
		ifst >> temp >> name;
		if (strlen(name) > 48)
			name[49] = '\0';
		mof = (bush::Month)temp;
		plant::InData(ifst);
	}



	void bush::Out(ofstream& ofst) {
		switch (mof)
		{
		case JANUARY:
			ofst << "It is Bush: month of flowering = " << "January"
				<< ", name = " << name << ", ";
			break;
		case FEBRUARY:
			ofst << "It is Bush: month of flowering = " << "February"
				<< ", name = " << name << ", ";
			break;
		case MARCH:
			ofst << "It is Bush: month of flowering = " << "March"
				<< ", name = " << name << ", ";
			break;
		case APRIL:
			ofst << "It is Bush: month of flowering = " << "April"
				<< ", name = " << name << ", ";
			break;
		case MAY:
			ofst << "It is Bush: month of flowering = " << "May"
				<< ", name = " << name << ", ";
			break;
		case JUNE:
			ofst << "It is Bush: month of flowering = " << "June"
				<< ", name = " << name << ", ";
			break;
		case JULY:
			ofst << "It is Bush: month of flowering = " << "July"
				<< ", name = " << name << ", ";
			break;
		case AUGUST:
			ofst << "It is Bush: month of flowering = " << "August"
				<< ", name = " << name << ", ";
			break;
		case SEPTEMBER:
			ofst << "It is Bush: month of flowering = " << "September"
				<< ", name = " << name << ", ";
			break;
		case OCTOBER:
			ofst << "It is Bush: month of flowering = " << "October"
				<< ", name = " << name << ", ";
			break;
		case NOVEMBER:
			ofst << "It is Bush: month of flowering = " << "November"
				<< ", name = " << name << ", ";
			break;
		case DECEMBER:
			ofst << "It is Bush: month of flowering = " << "December"
				<< ", name = " << name << ", ";
			break;
		default:
			ofst << "Error: " << mof << " is invalid number of month" << endl;
			break;
		}
		plant::Out(ofst);
		ofst << endl;
	}
