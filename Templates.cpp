#include <iostream>
using namespace std;


template <class T>

class vector
{
    public:
    T *arr;
    int size;
        vector(int m)
        {
            size=m;
            arr= new T [size];
        }
        T dotVec(vector &v)
        {
            T d=0;
            for(int i=0;i<size;i++)
            {
                d += this->arr[i] * (v.arr[i]);
            }
            return d;
        }
};

int main()
{

    vector <float> v1(3);
    v1.arr[0]=4.12;
    v1.arr[1]=3.64;
    v1.arr[2]=3.1;
    vector <float> v2(3);
    v2.arr[0]=1.31;
    v2.arr[1]=5.32;
    v2.arr[2]=1.3;
    float a=v1.dotVec(v2);
    cout<<a<<endl;
    vector <int> v5(3);
    v5.arr[0]=4;
    v5.arr[1]=3;
    v5.arr[2]=1;
    vector <int> v6(3);
    v6.arr[0]=1;
    v6.arr[1]=0;
    v6.arr[2]=1;
    int a1=v5.dotVec(v6);
    cout<<a1<<endl;
    vector <double> v3(3);
    v3.arr[0]=43.34;
    v3.arr[1]=3.324;
    v3.arr[2]=3.167;
    vector <double> v4(3);
    v4.arr[0]=8.34;
    v4.arr[1]=9.4321;
    v4.arr[2]=19.3;
    double a2=v3.dotVec(v4);
    cout<<a2<<endl;
    return 0;
}