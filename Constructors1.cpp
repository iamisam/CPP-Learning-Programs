#include <iostream>
using namespace std;

class Complex
{
    private:
    int a,b;
    //creating a constructor
    public:
    //creating a constructor
    //Constructor is a specail member function with same name as Class
    //used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
    Complex(void);//Constructor declaration
    void PrintNumber()
        {
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }

};

Complex :: Complex(void) //---> This is a default constructor 
{
    a=10;
    b=7;
}

int main()
{
    Complex c;
    c.PrintNumber();
    return 0;
}

/* Properties of constructors
    1.It should be declared in the public section of the class.
    2.They are automatically invoked whenever an object is created.
    3.Constructors cannot return values and do not have return types.
    4.It can have default arguments.
    5.We cannot refer to their address. 
*/