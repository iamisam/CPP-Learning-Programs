/*
    C++ was initially called 'C with classes'
    Classes are extension of Structures(in C)
    Structures in C had limitations :
    1.Members were public and easily accessible by anyone
    2.User cannot use Methods
    classes --> structures+more
    Classes can have Methods and Properties
    classes can make few members as private and few as public
    structures in C++ are typedefed
    you can declare objects along with the class declarations
    Like this:
        class Employee
        {
            --code--
        }harry,rohan,lavish;
    harry.salary makes no sense if salary is private

    */

#include <string>
#include <iostream>

using namespace std;

class Binary
{
    string s;
    private:
    void chk_bin(void);
    
    public:
    void read(void);
    void compliment(void);
    void display(void);
};

void Binary :: read(void)
{
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void Binary :: chk_bin(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Not a binary number "<<endl;
            exit(0);
        }
    }
}

void Binary :: compliment(void)
{
    chk_bin();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)=1;
        }
        else if(s.at(i)=='1')
        {
            s.at(i)=0;
        }
    }
}

void Binary :: display(void)
{
    cout<<"Displaying your complimentary Binary Number"<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<(s.at(i));
    }
    cout<<endl;
}

int main()
{
    
   Binary b;
   b.read();
   b.compliment();
   b.display();
   return 0;
}