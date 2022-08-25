#include <iostream>
#include <string>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    //Function Objects (Also called Functor) : Wrapped in a class so that it is available like an object.
    int arr[]={12,3,77,1,4,7};
    sort(arr,arr+6,greater<int>());
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}