#include <iostream>
using namespace std;

class Y;

class X
{
    friend void add(X, Y);
    int data;

public:
    void setData(int value)
    {
        data = value;
    }
};

class Y
{
    friend void add(X, Y);
    int num;

public:
    void setData(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "Adding the data of X and Y objects gives me " << o1.data + o2.num << endl;
}

int main()
{
    X a;
    a.setData(3);
    Y b;
    b.setData(5);

    add(a,b);
    
    return 0;
}