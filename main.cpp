﻿#include <iostream>
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
    if (!ifst)
    {
        cout << "No input file found!" << endl;
        return 0;
    }
    ofstream ofst(argv[2]);
    if (!ofst)
    {
        cout << "No output file found!" << endl;
        return 0;
    }
    cout << "Start" << endl;
    container c;
    c.In(ifst);
    ofst << "Filled container. " << endl;
    c.Out(ofst);
    ofst << "Sorted container. " << endl;
    c.sort();
    c.Out(ofst);
    c.~container();
    ofst << "Empty container. " << endl;
    c.Out(ofst);
    cout << "Stop" << endl;
    return 0;

}
