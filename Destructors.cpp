#include <iostream>
using namespace std;

/* Destructor:
   Never takes an argument nor does it return any value.
*/

int count=0;

class num
{
    public:
    num()
    {
        count++;
        cout<<"This is the time when the constructor is called for object number "<<count<<endl;
    }
    ~num()
    {
        cout<<"This is the time when my destructor is called for object number "<<count<<endl;
        count--;
    }
}; 

int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first objects N1"<<endl;
    num N1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects "<<endl;
        num N2,N3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}