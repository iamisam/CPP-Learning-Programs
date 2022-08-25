#include <iostream>
using namespace std;

class Complex
{
    private:
    int a,b;
    public: 
        void setData(int v1,int v2)
        {
            a=v1;
            b=v2;
        }

        void setDatabySum(Complex o1,Complex o2)
        {
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }

        void PrintNumber()
        {
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }    
};

int main()
{
    Complex c1,c2,c3;
    c1.setData(1,2);
    c1.PrintNumber();

    c2.setData(3,4);
    c2.PrintNumber();
    
    c3.setDatabySum( c1 , c2);
    c3.PrintNumber();

    return 0;
}