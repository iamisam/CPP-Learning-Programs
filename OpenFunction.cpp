#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ofstream out;
    out.open("Sampleb.txt");
    out<<"This is me Isam Abdul Aziz";
    out.close();
    ifstream in("Sampleb.txt");
    string st;
    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}