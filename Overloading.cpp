#include <iostream>
using namespace std;

int sum(int a,int b,int c)
{
    return a+b+c;
}

int sum(int a,int b)
{
    return a+b;
}

int main()
{
    cout<<"The sum of 3 and 6 is : \n"<<sum(3,6)<<endl;
    cout<<"The sum of 3 and 6 and 7 is : \n"<<sum(3,6,7)<<endl;


    return 0;
}