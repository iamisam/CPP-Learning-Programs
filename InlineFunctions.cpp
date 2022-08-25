#include <iostream>
using namespace std;
//Inline is used mainly for functions that have very less code and it helps in reducing the program execution time
inline int prod(int a,int b)
{
    return a*b;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b\n";
    cin>>b;
    cout<<"The product of a and b is : "<<prod(a,b)<<endl;
    return 0;
}