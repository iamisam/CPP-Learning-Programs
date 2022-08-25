#include <iostream>
using namespace std;

/*Syntax for Multiple Inheritance 
    class DerivedC : {{visibility-mode}} base1, {{visibility-mode}} base 2
    {
        Content of DerivedC.
    };
*/

class Base1
{
    protected:
        int base1int;
    private:
    public:
        void setBase1(int a)
        {   
            base1int=a;
        }

};

class Base2
{
    protected:
        int base2int;
    private:
    public:
        void setBase2(int a)
        {   
            base2int=a;
        }

};

class Derived : public Base1, public Base2
{
    protected:

    private:

    public:
        void show()
        {
            cout<<"The value of base 1 is "<<base1int<<endl;
            cout<<"The value of base 2 is "<<base2int<<endl;
            cout<<"The sum of these values is "<<(base1int+base2int)<<endl;
        }
};

int main()
{
    Derived harry;
    harry.setBase1(23);
    harry.setBase2(53);
    harry.show();
    return 0;
}