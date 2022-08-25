#include <iostream>
using namespace std;

class Base
{   
    public:
    int var1=1;
    virtual void display()//virtual word changed the output to 2 if you remove this output will be 1.
    {
        cout<<"Displaying Base class variable "<<var1<<endl;
    }


};

class Derived : public Base
{
    public:
    int var2=2;
    void display()
    {
        cout<<"Displaying Derived class variable "<<var2<<endl;
    }

};

int main()
{   
    Base *ptr1;
    Base objB;
    Derived objD;
    ptr1 = &objD;

    ptr1 -> display();
    return 0;
}