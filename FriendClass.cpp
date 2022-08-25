#include <iostream>
using namespace std;

class Complex;

class Calc
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumRealComplex(Complex, Complex);
    int sumImaginary(Complex, Complex);
};

class Complex
{
private:
    int a, b;
    friend class Calc;
    //friend int Calc ::sumRealComplex(Complex o1, Complex o2);
    //friend int Calc ::sumImaginary(Complex o1,Complex o2);
public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void PrintNumber()
    {
        cout << "Your complex number is " << a << "+" << b << "i" << endl;
    }
};

int Calc ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calc :: sumImaginary(Complex o1,Complex o2)
{
    return (o1.b+o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNum(1, 4);
    o2.setNum(5, 7);
    Calc calc1;

    int res = calc1.sumRealComplex(o1, o2);
    int res1 = calc1.sumImaginary(o1, o2);
    cout << "The Sum of their Real Part is " << res << endl;
    cout << "The Sum of their Imaginary Part is " << res1 << endl;

    return 0;
}