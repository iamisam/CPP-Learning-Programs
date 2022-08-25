#include <string>
#include <iostream>
using namespace std;

class Employee;

class Employee
{
    string name;
    private:
    
    public:
    void getName(void);
    void display(void);
};

void Employee :: getName(void)
        {
            cin>>name;
        }

void Employee :: display(void)
{
    cout<<name<<endl;
    
}

int main()
{
    int num;
    cout<<"Enter the number of people hired by your company"<<endl;
    cin>>num;
    Employee m[num];
    for(int i=0;i<num;i++)
    {
        cout<<"Name of employee number "<<i+1<<endl;
        m[i].getName();
    }
    cout<<"We have collected the names and have stored them as a list\nNow let us print them for you"<<endl;
    for(int i=0;i<num;i++)
    {
        m[i].display();
    }
    return 0;
}