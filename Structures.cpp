#include <iostream> 
using namespace std;

typedef struct employee
{
    int emID;
    float salary;
}ep;

union money
{
    int rice;
    char Car;
    float pounds;
};

 int main()
{ 
    union money m1;
    m1.rice =34;
    cout<<m1.rice<<endl;
    ep harry;
    harry.emID=1;
    harry.salary=12000;
    
    cout<<harry.salary<<endl;
    
    return 0; 

}