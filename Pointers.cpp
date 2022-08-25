#include <iostream>
using namespace std;

int main()
{
    //What is a pointer ? --> A type of variable which holds the address of other data types
    int a=3;
    int* ptr=&a;
    // '&' --> Address of operater
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<ptr<<endl;
    cout<<"The value at address B is "<<*ptr<<endl;

    //Pointers and Arrays
    int marks[5]={234,325,126,3,131};
    int* p = marks;
    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;
    cout<<"The value of marks[4] is "<<*(p+4)<<endl;
    return 0;
}