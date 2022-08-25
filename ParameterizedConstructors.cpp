#include <iostream>
using namespace std;

class Complex
{
    private:
    int a,b;
    //creating a constructor
    public:
    Complex(int,int);//Constructor declaration
    void PrintNumber()
        {
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }

};

Complex :: Complex(int x,int y) //---> This is a Parameterized constructor as it takes two parameters.
{
    a=x;
    b=y;
}

int main()
{   
    //Explicit call
    Complex b=Complex(5,7);
    b.PrintNumber();
    //Implicit call
    Complex c(4,6);
    c.PrintNumber();
    return 0;
}
