#include <iostream>
using namespace std;

class Employee
{   
    int id;
    static int count;

    public:
    void setData(void)
    {
        cout<<"Enter the ID"<<endl;
        cin>>id;
        count++;
    }
    void getData(void)
    {
        cout<<"The ID of the Employee has been set to "<<id<<" and this is Employee number "<<count<<endl;
    }

    static void getCount(void)
    {
        cout<<"The value of count is "<<count<<endl;
    }
};

/*    */   int Employee :: count;//Default value is zero
int main()
{
    Employee harry,rohan,lavish;
    harry.setData();
    harry.getData();
    Employee :: getCount();
    rohan.setData();
    rohan.getData();
    Employee :: getCount();
    lavish.setData();
    lavish.getData();    
    Employee :: getCount();
    return 0;
}