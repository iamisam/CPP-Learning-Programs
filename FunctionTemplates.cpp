#include <iostream>
using namespace std;

template <class T1,class T2>


float funcAvg(T1 a,T2 b)
{
    float avg=(a+b)/2.0;
    return avg;
}

template <class T>
void func(T a)
{
    cout<<"I am templatised func "<<a<<endl;
}



void func(int a)
{
    cout<<"I am normal func "<<a<<endl;
}


int main()
{
    float a;
    a=funcAvg(51.23,24.23);
    cout<<a<<endl;
    func(4);//Prespecified datatype give highest priority in template funtion overloading
    //output of this fill be from func(int a)
 
    return 0;
}