#include <iostream>
#include <fstream>
#include "Container.h"
using namespace std;

int main(int argc, char* argv[])
{
	if (argc != 3)
	{
		cout << "incorrect command line! "
			"Waited: command in_file out_file"
			<< endl;
		exit(1);
	}
	ifstream ifst(argv[1]);
	ofstream ofst(argv[2]);
	cout << "Start" << endl;
	Container Container;
	Container.In(ifst);
	ofst << "Filled container. " << endl;
	Container.Out(ofst);
	ofst << "Sorted container. " << endl;
	Container.Sort();
	Container.Out(ofst);
	Container.~Container();
	ofst << "Empty container. " << endl;
	Container.Out(ofst);
	cout << "Stop" << endl;
	return 0;

}
