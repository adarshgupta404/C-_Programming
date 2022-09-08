// Copy Constructor
/*
    A copy constructor is a member function that initializes an object
    using another object of the same class. A copy constructor has the
    following general function prototype:
    ClassName (const ClassName &old_obj);
*/
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;

class Number
{
private:
    int a;

public:
    Number();
    Number(int num);
    Number(Number &obj);
    void display();
};

Number::Number()
{
    a = 0;
}

Number::Number(int num)
{
    a = num;
}

// When no copy constructor is found, compiler supplies
// its own copy constructor.
Number::Number(Number &obj)
{
    cout << "Copy Constructor called!!" << endl;
    a = obj.a;
}
void Number::display()
{
    cout << "The display for this object is " << a << endl;
}

int main()
{
    Number x(1), y, z(45);
    x.display();
    y.display();
    z.display();
    Number z1(x); // Number z1(x);
    // Copy constructor invoked.
    z1.display();
    //  z1 = x; // copy constructor not called.
    Number z2 = z; // Copy constructor invoked.
    z2.display();
    getch();
    return 0;
}