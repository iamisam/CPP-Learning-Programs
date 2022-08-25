#include <iostream>
using namespace std;

class Bank
{
    int principle;
    int years;
    int rate;
    int returnValue;

    public:
        Bank(){};
        Bank(int p,int y,float r);
        
        void show();
};

Bank :: Bank(int p,int y,float r)
{
    principle=p;
    years=y;
    rate=r;

    returnValue=principle;
    for(int i=0;i<y;i++)
    {
        returnValue=returnValue * (1+r);
    }
    

}


void Bank :: show()
{
    cout<<"Principle amount was :"<<principle<<endl;
    cout<<"Return value after "<<years<<" years is :"<<endl;
    cout<<returnValue<<endl;
}

int main()
{
    Bank bd1,bd2;
    int p,y;
    float r;
    int R;


  
    cout<<"Enter the value of your principle "<<endl;
    cin>>p;
    cout<<"Enter the number of years"<<endl;
    cin>>y;
    cout<<"Enter the rate you are getting"<<endl;
    cin>>R;
    r=((float)R)/100;
    bd2 = Bank(p,y,r);
    bd2.show();
    
    return 0;
}