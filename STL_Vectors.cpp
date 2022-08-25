#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{   
    cout<<"Displaying this vector"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<endl;
    }
    cout<<endl;
}

int main()
{
    //vector <int> vec1; // Zero length vector
    //vector <int> vec2(4); // interger vector
    vector <char> vec3(4);
    vector <char> vec4(vec3);
    vector <int> v(6,3);

    vec3.push_back(5);
    vec3.push_back(5);
    vec3.push_back(5);
    vec3.push_back(5);
    display(vec3);

    display(vec4);

    display(v);

    int element;
    int size=5;


    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;
    // for(int i=0;i<size;i++)
    // {
    //     cout<<"Enter the element to add to this vector"<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // cout<<endl;
    
    
    // display(vec1);
    // vector <int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,5,566);
    // display(vec1);
    return 0;
}