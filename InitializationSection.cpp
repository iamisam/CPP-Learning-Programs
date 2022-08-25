/*
    Syntax for Initialization list in constructor:
    constructor (arguments) : initialization-section
    {
        assignment + other code;    
    }
*/

#include <iostream>
using namespace std;

class Test
{
    int a,b;//(10)  Here a is defined first
    public:
        Test(int i,int j):a(i),b(j) //'a' will only be initialized first because a is defined first above (10)
        {
            cout<<"Constructor executed"<<endl;
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
        ~Test()
        {
            cout<<"Destructor called"<<endl;
        }
};

int main()
{
    Test t(4,6);
    return 0;
}