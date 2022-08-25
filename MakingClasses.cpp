#include <iostream>
using namespace std;

class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1);
        void getData()
        {
            cout<<"The value of A is "<<a<<endl;
            cout<<"The value of B is "<<b<<endl;
            cout<<"The value of C is "<<c<<endl;
            cout<<"The value of D is "<<d<<endl;
            cout<<"The value of E is "<<e<<endl;
        }
};

void Employee :: setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;c=c1;
}

int main()
{
    Employee harry;
    harry.setData(2,3,7);
    harry.d=34;
    harry.e=654;
    harry.getData();
    return 0;
}