#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData()
{
    data1 = 54;
    data2 = 45;
}

int Base ::getData1()
{
    return data1;
}

int Base ::getData2()
{
    return data2;
}

class Derived : public Base
{
private:
    int data3;

public:
    void Process(void);
    void Display(void);
};

void Derived ::Process()
{
    setData();
    data3 = data2 * getData1();
}

void Derived ::Display()
{
    cout << "Value of Data 1 is " << getData1() << endl;
    cout << "Value of Data 1 is " << data2 << endl;
    cout << "Value of Data 1 is " << data3 << endl;
}

int main()
{
    Derived der;
    der.setData();
    der.Process();
    der.Display();
    return 0;
}