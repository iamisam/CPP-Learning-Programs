/*
    Create 2 classes:
        1.Simple Calculator. --> Takes input of two numbers using a utility function and performs addition,subtraction,division,multiplication.
        2.Scientific Calculator. --> Takes input of two numbers and performs anu four scientific operations of your choice 
        3.Displays the result of using another function.

        Create another class HybridCalc and inherit it using these 2 classes.
        Question:
            1.What type of inheritance are you using.
            2.Which mode of inheritance are you using.
            3.Create an object of HybridCalc and display results of Simple and Scientific Calculator.
            4.How is code reusability implemented?
*/
#include <cmath>
#include <iostream>
using namespace std;

class Simple
{
    protected:
    int a,b;
    public:
        int Sum1(int a,int b)
        {
            return a+b; 
        }
        int Sub1(int a,int b)
        {
            return a-b;
        }
        int Multi1(int a,int b)
        {
            return a*b;
        }
        int Div1(int a,int b)
        {
            return a/b;
        }
        void getData1()
        {
            cout<<"The numbers entered by you are "<<a<<", "<<b<<endl;
        }
};  

class Scientific
{
    protected:
        int exp1;int log1;int log2;int deg;
    public:
        float pow1(int a)
        {
            exp1=a;
            return exp(exp1);
        }
        int logar(int a)
        {
            log1=a;
            return log(log1);
        }
        int logar2(int a)
        {
            log2=a;
            return log(log2);
        }
        int cosine(int a)
        {
            deg=a;
            return cos(deg);
        }
        

};

class HybridCalc : public Simple,public Scientific
{
    public:
        void getData1(int a,int b)
        {
            cout<<"Two numbers are entered. Following operations on them will be done\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division"<<endl;
            cout<<Sum1(a,b)<<endl;
            cout<<Sub1(a,b)<<endl;
            cout<<Multi1(a,b)<<endl;
            cout<<Div1(a,b)<<endl;
        }
        void getData2(int a)
        {
            cout<<"This is a scientific part and the number entered by you is "<<a<<endl;
            cout<<"The following function will be done on them\n1.Exponential\n2.Natural Log\n3.Log to the base 10\n4.Cosine"<<endl;
            cout<<pow1(a)<<endl;
            cout<<logar(a)<<endl;
            cout<<logar2(a)<<endl;
            cout<<cosine(a)<<endl;
        }
};

int main()
{
    HybridCalc harry;
    cout<<"Now we will perform 8 functions on any two numbers entered by you"<<endl;
    int a;int b;
    cin>>a>>b;
    harry.getData1(a,b);
    harry.getData2(a);
    return 0;
}