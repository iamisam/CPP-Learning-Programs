#include <iostream>
using namespace std;

class Base
{   
    public:
    int var1;
    void display()
    {
        cout<<"Displaying Base class variable "<<var1<<endl;
    }


};

class Derived : public Base
{
    public:
    int var2;
    void display()
    {
        cout<<"Displaying Derived class variable "<<var2<<endl;
    }

};

int main()
{   
    Base *ptr;
    Base objB;
    Derived objD;
    Derived *ptr2; 
    ptr = &objD;//Pointing base class pointer to derived class.
    ptr2 = &objD;
    ptr2 -> var1=542;
    ptr2 -> var2=32;
    ptr -> display();
    ptr2 ->display();
    // ptr -> var2 = 134; Will throw an error.
    

    return 0;
}

/*

    Polymorphism :
    -One name and multiple uses.
    -Function overloading,operater overloading
    -Virtual Functions

    Polymorphism in C++ is of two types:
    1. Compile Time Polymorphism
    2. Run Time Polymorphism

    1. Compile Time Polymorphism:
        Using 
        i.Function Overloading.
        ii.Operater Overloading.
    2. Run Time Polymorphism:
        Using
        i.Virtual Function.

*/