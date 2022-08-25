#include <iostream>
using namespace std;

class Student
{
    protected:
        int roll;
    public:
        void setNum(int a)
        {
            roll=a;
        }
        void printNum()
        {
            cout<<"Your roll number is "<<roll<<endl;
        }
};


class Test : virtual public Student
{
    protected:
        float maths,physics;
    public:
        void setMarks(float m1,float m2)
        {
            maths=m1;
            physics=m2;
        }
        void printMarks()
        {
            cout <<"You Result is :"<<endl;
            cout<<"Maths : "<<maths<<endl;
            cout<<"Physics : "<<physics<<endl;
        }
};

class Sports : virtual public Student
{
    protected:
        float score;
    public:
        void setScore(float a)
        {
            score=a;
        }
        void printScore()
        {
            cout<<"Your score is : "<<endl;
            cout<<score<<endl;
        }
};

class Result : public Test,public Sports
{
    private:
        float total;
    protected:

    public:
        void Display()
        {
            total=physics+maths+score;
            printNum();
            printMarks();
            printScore();
            cout<<"Your total score is "<<total<<endl;
        }
};

int main()
{
    Result isam;
    isam.setNum(5128);
    isam.setMarks(95,97.4);
    isam.setScore(10);
    isam.Display();
    return 0;
}