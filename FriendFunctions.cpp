#include <iostream>
using namespace std;

class Complex
{
    private:
    int a,b;
    public:
        void setNum(int n1,int n2)
        {
            a=n1;b=n2;
        }

        friend Complex sumComplex(Complex o1,Complex o2);
        void PrintNumber()
        {
            cout<<"Your complex number is "<<a<<"+"<<b<<"i"<<endl;
        }

};

Complex sumComplex(Complex o1,Complex o2)
{
    Complex o3;
    o3.setNum((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{   
    Complex c1,c2,sum;
    c1.setNum(1,4);
    c1.PrintNumber();
    c2.setNum(5,8);
    c2.PrintNumber();
    sum=sumComplex(c1,c2);
    sum.PrintNumber();
    return 0;
}