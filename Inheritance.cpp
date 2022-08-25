#include <iostream>
using namespace std;

//Base Class
class Employee
{
    public:
    int ID;
    float salary;
        Employee(){}
        Employee(int inpID)
        {
            ID=inpID;
            salary=3454;

        }
};

//Derived Class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//      class members/methods/....
// }
/*
// Default Visibility Mode is private. 
   Private Visibility Mode : public members of the base class become private members of the derived class
   Public Visibility Mode : public members of the base class become public members of the derived class
   Private members are never inherited.
*/
class Programmer : public Employee
{   
    public:
    Programmer(int inpID)
    {
        ID=inpID;
    }
    void getData()
    {
        cout<<ID<<endl;
    }
    int languageCode=9;
}; 



int main()
{
    Employee harry(241),rohan(242);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer Skillef(1);
    cout<<Skillef.languageCode<<endl;
    Skillef.getData();
    return 0;
}