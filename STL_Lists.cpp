#include <list>
#include <iostream>
using namespace std;

int main()
{
    list <int> list1; // List of zero length.
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list <int> :: iterator iter;
    iter = list1.begin();
    cout<<(*iter)<<endl;
    iter++;
    cout<<(*iter)<<endl;
    iter++;
    cout<<(*iter)<<endl;
    iter++;
    cout<<(*iter)<<endl;
    iter++;
    cout<<(*iter)<<endl;





    list <int> list2(3); // Empty list of length 7.
    




    return 0;
}