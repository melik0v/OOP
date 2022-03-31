#include "Bush.h"
using namespace std;



	// Ввод параметров кустарника
	void bush::InData(ifstream& ifst) {
		int temp;
		ifst >> temp;
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
			ofst << "It is Bush, " << mof << " is invalid number of month" << endl;
			break;
		}
		plant::Out(ofst);
	}
