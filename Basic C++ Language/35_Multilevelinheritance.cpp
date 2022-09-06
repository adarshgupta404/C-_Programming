// Multilevel Inheritance: A -> B -> C
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_roll_no(int);
        void get_roll_no(void);
};
void Student :: set_roll_no(int r){
    roll_no = r;
}
void Student :: get_roll_no(){
    cout<<"The Roll No.: "<<roll_no<<endl;
}

class Exam : public Student
{
    protected:
        float maths, physics;
    public:
        void set_marks(float,float);
        void get_marks(void);
};
void Exam :: set_marks(float m1,float m2){
    maths = m1;
    physics = m2;
}
void Exam :: get_marks(){
    cout<<"The marks obtained in maths are : "<<maths<<endl;
    cout<<"The marks obtained in physics are : "<<physics<<endl;
}

class Result : public Exam
{   
    private:
        float percentage;
    public:
        void display(){
            get_roll_no();
            get_marks();
            cout<<"Your percentage is : "<<(maths+physics)/2<<endl;
        }
};
int main()
{
Result Harry;
Harry.set_roll_no(420);
Harry.set_marks(94.0,90.0);
Harry.display();
getch();
return 0;
}