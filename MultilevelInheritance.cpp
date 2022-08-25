#include <iostream>
using namespace std;

class Student
{
    protected:
    int rollNumber;
    public:
        void setRoll(int);
        void getRoll(void);

};

void Student :: setRoll(int r)
{
    rollNumber=r;
}

void Student :: getRoll()
{
    cout<<"The roll number is "<<rollNumber<<endl;
}

class Exam : public Student
{
    protected:
    float maths;
    float physics;
    public:
        void setMarks(float,float);
        void getMarks(void);

};

void Exam :: setMarks(float a,float b)
{
    maths=a;
    physics=b;
}

void Exam :: getMarks()
{
    cout<<"The marks obtained in Mathematics are "<<maths<<endl;
    cout<<"The marks obtained in Physics are "<<physics<<endl;
}

class Result : public Exam
{
    float percentage;
    public:
        void display()
        {
            getRoll();
            getMarks();
            cout<<"Your Percentage is "<<((maths+physics)/2)<<"%"<<endl;
        }
};

int main()
{
    Result harry;
    harry.setRoll(420);
    harry.setMarks(99.4,100);
    harry.display();
    return 0;
}