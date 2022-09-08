/*Virtual Base Class:
    Virtual base classes are used in virtual inheritance in a way of preventing
    multiple “instances” of a given class appearing in an inheritance hierarchy
    when using multiple inheritances.
*/
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
/*Student-->test
Student-->sports
test-->result
student-->result*/
class Student
{
private:
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your Roll is " << roll_no << endl;
    }
};
class test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your result is here:" << endl
             << " Maths " << maths << endl
             << " Physics " << physics << endl;
    }
};
class sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is : " << total << "/300" << endl;
    }
};
int main()
{
    result r;

    r.set_number(21);
    r.set_marks(94.0, 95.0);
    r.set_score(96.0);
    r.display();
    getch();
    return 0;
}