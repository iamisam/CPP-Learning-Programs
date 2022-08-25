#include <iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
        void setData(int a,int b)
        {
            real=a;
            img=b;
        }
        void getData()
        {
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<img<<endl;
            cout<<"The Complex number is "<<real<<" + "<<img<<"i"<<endl; 
        
        }
};

int main()
{
    Complex c1;
    // Complex *ptr=&c1; is same as :
    Complex *ptr = new Complex[4];
    // (*ptr).setData(1,54); is same as :
    (ptr) -> setData(1,54);
    (ptr+1) -> setData(1,5);
    (ptr+2) -> setData(1,4);
    (ptr+3) -> setData(1,6);
    // (*ptr).getData(); is same as :
    (ptr) -> getData(); 
    (ptr+1) -> getData(); 
    (ptr+2) -> getData(); 
    (ptr+3) -> getData(); 
    return 0;
}