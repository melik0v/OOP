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
				<< ", ";
			break;
		case FEBRUARY:
			ofst << "It is Bush: month of flowering = " << "February"
				<< ", ";
			break;
		case MARCH:
			ofst << "It is Bush: month of flowering = " << "March"
				<< ", ";
			break;
		case APRIL:
			ofst << "It is Bush: month of flowering = " << "April"
				<< ", ";
			break;
		case MAY:
			ofst << "It is Bush: month of flowering = " << "May"
				<< ", ";
			break;
		case JUNE:
			ofst << "It is Bush: month of flowering = " << "June"
				<< ", ";
			break;
		case JULY:
			ofst << "It is Bush: month of flowering = " << "July"
				<< ", ";
			break;
		case AUGUST:
			ofst << "It is Bush: month of flowering = " << "August"
				<< ", ";
			break;
		case SEPTEMBER:
			ofst << "It is Bush: month of flowering = " << "September"
				<< ", ";
			break;
		case OCTOBER:
			ofst << "It is Bush: month of flowering = " << "October"
				<< ", ";
			break;
		case NOVEMBER:
			ofst << "It is Bush: month of flowering = " << "November"
				<< ", ";
			break;
		case DECEMBER:
			ofst << "It is Bush: month of flowering = " << "December"
				<< ", ";
			break;
		default:
			ofst << "It is Bush, invalid number of month" << endl;
			break;
		}
		plant::Out(ofst);
	}
