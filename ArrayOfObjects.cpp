#include <iostream>
using namespace std;

class Employee 
{
    private: 
    int id;int salary;
    public:
        void setID(void)
        {
            salary=122;
            cout<<"Enter the ID of the Employee"<<endl;
            cin>>id;
        }

        void getID(void)
        {
            cout<<"The ID of the employee is "<<id<<endl;
        }
};

int main()
{
    //Employee harry,rohan,lavish,shruti,..... too long to type everything;
    Employee fb[4];
    for(int i=0;i<4;i++)
    {
        fb[i].setID();
        fb[i].getID();
    }

    return 0;
}