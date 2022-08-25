#include <cstring>
#include <iostream>
using namespace std;

class CWH
{
    protected:
    string title;
    float rating;
    public:
        CWH(string s,float r)
        {
            title =s; 
            rating =r;
        }
        virtual void display()
        {
            cout<<"Bogus code"<<endl;
        }
};

class CWHV : public CWH
{
    float vidLength;
    public:
        CWHV(string s,float r,float vl):CWH(s,r)
        {
            vidLength=vl;
        }
        void display()
        {
                cout<<endl<<endl;
                cout<<"This is an amazing video with title "<<title<<"."<<endl;
                cout<<"This video has rating "<<rating<<" out of 5 stars."<<endl;
                cout<<"The length of this video is "<<vidLength<<" minutes."<<endl;
                cout<<endl<<endl;
        }
};

class CWHT : public CWH
{
    int words;
    public :
        CWHT(string s,float r,int wc):CWH(s,r)
        {
            words=wc;
        }
        void display()
        {
            
                cout<<"This is an amazing tutorial with title "<<title<<"."<<endl;
                cout<<"This text tutorial has rating "<<rating<<" out of 5 stars."<<endl;
                cout<<"This tutorial has "<<words<<" words."<<endl;
                cout<<endl<<endl;
        }
};

int main()
{
    string title;
    float rating,vlength;
    int words;

    title = "Django Tutorial";
    vlength=4.64;
    rating=2.4;
    CWHV djVideo(title,rating,vlength);
    //djVideo.display();

    title = "Django Tutorial";
    words=243;
    rating=2.4;
    CWHT djtext(title,rating,words);
    //djtext.display();

    CWH* tut0;
    CWH* tut1;
    tut0 = &djVideo;
    tut1 = &djtext;

    tut0 -> display();
    tut1 -> display();

    return 0;
}

/*
    Rules for virtual function:
    1.They cannot be static.
    2.They are accessed by object pointers.
    3.Virtual function can be a friend of another class.
    4.A virtual function in base class may or may not be used.
    5.If a virtual function is defined in a base class,there is no necessity of redefining it 
      int the derived class.
*/