#include "Bush.h"
using namespace std;

	// Ввод параметров кустарника
	void bush::InData(ifstream& ifst) {
		int temp;
		ifst >> temp >> name;
		mof = (bush::Month)temp;
	}

	void bush::Out(ofstream& ofst) {
		switch (mof)
		{
		case JANUARY:
			ofst << "It is Bush: month of flowering = " << "January"
				<< ", name = " << name << endl;
			break;
		case FEBRUARY:
			ofst << "It is Bush: month of flowering = " << "February"
				<< ", name = " << name << endl;
			break;
		case MARCH:
			ofst << "It is Bush: month of flowering = " << "March"
				<< ", name = " << name << endl;
			break;
		case APRIL:
			ofst << "It is Bush: month of flowering = " << "April"
				<< ", name = " << name << endl;
			break;
		case MAY:
			ofst << "It is Bush: month of flowering = " << "May"
				<< ", name = " << name << endl;
			break;
		case JUNE:
			ofst << "It is Bush: month of flowering = " << "June"
				<< ", name = " << name << endl;
			break;
		case JULY:
			ofst << "It is Bush: month of flowering = " << "July"
				<< ", name = " << name << endl;
			break;
		case AUGUST:
			ofst << "It is Bush: month of flowering = " << "August"
				<< ", name = " << name << endl;
			break;
		case SEPTEMBER:
			ofst << "It is Bush: month of flowering = " << "September"
				<< ", name = " << name << endl;
			break;
		case OCTOBER:
			ofst << "It is Bush: month of flowering = " << "October"
				<< ", name = " << name << endl;
			break;
		case NOVEMBER:
			ofst << "It is Bush: month of flowering = " << "November"
				<< ", name = " << name << endl;
			break;
		case DECEMBER:
			ofst << "It is Bush: month of flowering = " << "December"
				<< ", name = " << name << endl;
			break;
		default:
			ofst << "Error: " << mof << " is invalid number of month" << endl;
			break;
		}
	}

	void bush::Multi_Method(plant* other, ofstream& ofst)
	{
		other->Multi_Method_Bush(ofst);
	}
	void bush::Multi_Method_Tree(ofstream& ofst)
	{
		ofst << "Tree and Bush" << endl;
	}
	void bush::Multi_Method_Bush(ofstream& ofst)
	{
		ofst << "Bush and Bush" << endl;
	}
