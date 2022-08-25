#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //Connecting our file with hout stream
    ofstream hout("Sampleb.txts");
    cout<<"Enter your name";
    //Creating a name string and filling it with the string entered by the user.
    string name;
    cin>>name;

    //Writing a string to the file.
    hout<<"My name is " + name;

    hout.close();

    ifstream hin("Sampleb.txt");
    string content;
    getline(hin,content);
    cout<<"The content of this file is :"<<endl<<content<<endl;
    hin.close();
    return 0;
}