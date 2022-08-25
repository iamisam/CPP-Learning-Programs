#include <map>
#include <string>
#include <iostream>
using namespace std;



int main()
{
    map <string,int> Marksmap;
    Marksmap["Isam"]=100;
    Marksmap["Yogesh"]=81;
    Marksmap["Tharikesh"]=92;
    map <string,int> :: iterator iter;
    Marksmap.insert({{"Tariqu",64},{"Thanish",32}});
    for(iter=Marksmap.begin();iter!=Marksmap.end();iter++)
    {
        cout<<(*iter).first<<endl<<(*iter).second<<endl;
    }

    return 0;
}