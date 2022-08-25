#include <iostream>
using namespace std;

class Complex
{
    private:
    int a,b;
    public:
        Complex(int x,int y)
        {
            a=x;
            b=y;
        }

        Complex(int x)
        {
            a=x;b=0;
        }
        void PrintNumber()
        {
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }

};

int main()
{
    Complex  c(4,6);
    c.PrintNumber();
    
    Complex d(5);
    d.PrintNumber();
    
    return 0;
}