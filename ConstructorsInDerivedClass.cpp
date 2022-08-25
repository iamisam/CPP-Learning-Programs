/*
    Case1:
    class B : public A
    {
        First Constructor of A then Constructor of B.
    };

    Case 2:
    class A : public B, public C
    {
        First Constructor of B then of C then of A.
    };

    Case 3:
    class A : public B,virtual public C
    {
        First Constructor of C then B then A.
    };
*/

#include <iostream>
using namespace std;

class Base
{
    protected:
        int data;
    public:
        Base(int i)
        {
            data =i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printData(void)
        {
            cout<<"The value of data1 is "<<data<<endl;
        }
        ~Base()
        {
            cout<<"Base1 class destructor called"<<endl;
        }
};

class Base2
{
    int data2;
    public:
        Base2(int i)
        {
            data2=i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printData2(void)
        {
            cout<<"The value of data2 is "<<data2<<endl;
        }
        ~Base2()
        {
            cout<<"Base2 class destructor called"<<endl;
        }
};

class Derived : public Base,public Base2
{
    int der1;int der2;
    public:
        Derived(int a,int b,int c,int d):Base(a),Base2(b)
        {
            der1=c;der2=d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printDer(void)
        {
            cout<<"The value of derived 1 and derived 2 is "<<der1<<" and "<<der2<<endl;
        }
        ~Derived()
        {
            cout<<"Derived class destructor called"<<endl;
        }
        
};


int main()
{
    Derived isam(1,2,3,4);
    isam.printData();
    isam.printData2();
    isam.printDer();
    return 0;
}