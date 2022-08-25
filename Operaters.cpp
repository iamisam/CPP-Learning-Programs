#include <iostream>
using namespace std;
/*There are two types of Header files:
1. Standard Header files that come with compiler
2. User Defined Header files that are made by the User 
*/

int main()
{
    int a=45;
    int b=6;
    cout<<"Operaters in C++"<<endl;
    cout<<"Following are the types of operaters in C++\n1. Arithematic Operators\n";
    cout<<"The Arithematic operation for a+b is : "<<a+b<<endl;
    cout<<"The Arithematic operation for a-b is : "<<a-b<<endl;
    cout<<"The Arithematic operation for a*b is : "<<a*b<<endl;
    cout<<"The Arithematic operation for a/b is : "<<a/b<<endl;
    cout<<"The Arithematic operation for a%b is : "<<a%b<<endl;
    cout<<"The Arithematic operation for a++ is : "<<a++<<endl;
    cout<<"The Arithematic operation for --a is : "<<a--<<endl;
    cout<<"The Arithematic operation for ++a is : "<<++a<<endl;
    cout<<"The Arithematic operation for --a is : "<<--a<<endl;
    //Assignment Operators 
    //;int b=9;char c='a';
    //Comparision Operators
    int a1=10;
    cout<<"The Comparision Operaters in C++"<<endl;
    cout<<"The value of a==b is "<< (a==b) <<endl;
    cout<<"The value of a!=b is "<< (a!=b) <<endl;
    cout<<"The value of a<=b is "<< (a<=b) <<endl;
    cout<<"The value of a>=b is "<< (a>=b) <<endl;
    cout<<"The value of a<b is "<< (a<b) <<endl;
    cout<<"The value of a>b is "<< (a>b) <<endl;

    cout<<"The Logical Operaters in C++\n";
    cout<<(a!=b&&a1>=b)<<endl;
    cout<<(a<=b||a1<=b)<<endl;

    return 0;
}