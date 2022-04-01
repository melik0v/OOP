#include "Bush.h"
#include <string>
#define WRONG_BUSH 0
#define WRONG_MOF 0
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
<<<<<<< Updated upstream
		int temp;
		ifst >> temp >> name;
		if (strlen(name) > 48)
			name[49] = '\0';
		mof = (bush::Month)temp;
=======
		string temp;
		ifst >> temp;
		if (temp == "\0")
		{	
			mof = (bush::Month)WRONG_MOF;
			return;
		}
		else
		{
			bool valid = true;
			for (int i = 0; i < temp.length(); i++)
			{
				if (!isdigit(temp[i]) || i > 9 || temp == "\0")
				{
					mof = (bush::Month)WRONG_MOF;
					valid = false;
					break;
				}
			}
			if (valid)
				mof = (bush::Month)stoi(temp);
		}
>>>>>>> Stashed changes
		plant::InData(ifst);
	}



	void bush::Out(ofstream& ofst) {
		switch (mof)
		{
		case JANUARY:
			ofst << "It is Bush: month of flowering = " << "January ";
			break;
		case FEBRUARY:
			ofst << "It is Bush: month of flowering = " << "February ";
			break;
		case MARCH:
			ofst << "It is Bush: month of flowering = " << "March ";
			break;
		case APRIL:
			ofst << "It is Bush: month of flowering = " << "April ";
			break;
		case MAY:
			ofst << "It is Bush: month of flowering = " << "May ";
			break;
		case JUNE:
			ofst << "It is Bush: month of flowering = " << "June ";
			break;
		case JULY:
			ofst << "It is Bush: month of flowering = " << "July ";
			break;
		case AUGUST:
			ofst << "It is Bush: month of flowering = " << "August ";
			break;
		case SEPTEMBER:
			ofst << "It is Bush: month of flowering = " << "September ";
			break;
		case OCTOBER:
			ofst << "It is Bush: month of flowering = " << "October ";
			break;
		case NOVEMBER:
			ofst << "It is Bush: month of flowering = " << "November ";
			break;
		case DECEMBER:
			ofst << "It is Bush: month of flowering = " << "December ";
			break;
		default:
<<<<<<< Updated upstream
			ofst << "Error: " << mof << " is invalid number of month" << endl;
=======
			ofst << "It is Bush, invalid number of month" << endl;
>>>>>>> Stashed changes
			break;
		}
		plant::Out(ofst);
		ofst << endl;
	}
