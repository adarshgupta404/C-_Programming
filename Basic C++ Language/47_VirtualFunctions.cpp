// Virtual Functions
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
/*A member function in the base class which is declared using virtual keyword is 
called virtual functions. They can be redefined in the derived class. 
To demonstrate the concept of virtual functions an example program is shown below*/
class BaseClass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "1Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2Dispalying Base class variable var_base " << var_base << endl;
        cout << "2Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    getch();
    return 0;
}