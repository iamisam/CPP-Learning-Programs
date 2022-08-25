#include <fstream>
#include <iostream>
#include <string>
using namespace std;

/*
    The useful classes for working with files in C++ are:
    1.fstreambase
    2.ifstream --> derived from fstreambase.
    3.ofstream --> derived from fstreambase.

    In order to work with files in C++ , you will have to open it. Primarily there are 
    two ways to open a file.
    1.Using a constructor.
    2.Using a member function open() of the class.
*/

int main()
{
    string st = "Harry bhai";
    string st2;
    //Opening files using constructor and writing it.
    // ofstream out("Sample.txt");//Write operation
    // out<<st;

    ifstream in("Sampleb.txt");
    //in>>st2;
    getline(in,st2);
    cout<<st2;
    return 0;
}