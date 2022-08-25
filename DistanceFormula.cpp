#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    private:
    int x,y;
    public:
        
        
        int getAbcissa()
        {
            cin>>x;
            return x;
        }
        int getOrdinate()
        {
            cin>>y;
            return y;
        }
        int display(int x,int y)
        {
            cout<<"The co-ordinate entered is ("<<x<<","<<y<<")"<<endl;
            return 0;
        }
        
};

int sumCord(int x,int y)
{   
    return x-y;
}

float Distance(int xq,int yq)
{
    float dist=pow((pow(xq,2)+pow((yq),2)),0.5);
    return dist;
};

int main()
{   
    Point a,b;
    cout<<"Enter the value of x co-ordinate"<<endl;
    int x1=a.getAbcissa();
    cout<<"Enter the value of y co-ordinate"<<endl;
    int y1=a.getOrdinate();
    a.display(x1,y1);

    cout<<"Now enter the x co-ordinate of the point you want to find the distance from "<<endl;
    int x2=b.getAbcissa();
    cout<<"Now enter the y co-ordinate of the point you want to find the distance from "<<endl;
    int y2=b.getOrdinate();
    b.display(x2,y2);

    cout<<"Now we will print the distance of the first co-ordinate from the second one"<<endl;
    int sum1=sumCord(x1,x2);
    int sum2=sumCord(y1,y2);
    float distance=Distance(sum1,sum2);

    cout<<"The distance is :"<<endl;
    cout<<distance;
    
    return 0;
}