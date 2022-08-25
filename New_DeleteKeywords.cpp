#include <iostream>
using namespace std;

int main()
{   
    int a=4;
    int* ptr = &a;
    *ptr=999;
    cout<<"The value of a is "<<(*ptr)<<endl;
    
    
    float *p=new float(30.322);
    cout<<"The value at address p is "<<(*p)<<endl;

    int *arr= new int[4];
    arr[0]=10;
    arr[1]=20;
    //Checkout the another way to assign below.
    *(arr+2)=30;
    arr[3]=40;

    cout<<"The value at address 0 is "<<arr[0]<<endl;
    cout<<"The value at address 1 is "<<arr[1]<<endl;
    cout<<"The value at address 2 is "<<arr[2]<<endl;
    cout<<"The value at address 3 is "<<arr[3]<<endl;

    delete[] arr;
    cout<<endl<<endl;

    cout<<"The value at address 0 is "<<arr[0]<<endl;
    cout<<"The value at address 1 is "<<arr[1]<<endl;
    cout<<"The value at address 2 is "<<arr[2]<<endl;
    cout<<"The value at address 3 is "<<arr[3]<<endl;

    return 0;
}