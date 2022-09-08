/*CONSTRUCTORS IN DERIVED CLASSES
•   We can use constructors in derived classes in C++
•   If base class constructor does not have any arguments, there is no need of
    any constructor in derived class.
•   But if there are one or more arguments in the base class constructor,
    derived class need to pass arguments to the base class constructor
•   If both base and derived classes have constructors,
    base class constructor is executed first.

CONSTRUCTORS IN MULTIPLE/MULTI-LEVEL INHERITANCE
•   In multiple inheritance, base classes are constructed in the order in which
    they appear in the class declaration.
•   In multilevel inheritance, the constructors are executed in the order of
    inheritance.

SPECIAL CASE OF VIRTUAL BASE CLASS
•   The constructors for virtual base classes are invoked before
    an nonvirtual base class
•   If there are multiple virtual base classes, they are invoked in the
    order declared.
•   Any non-virtual base class are then constructed before the derived
    class constructor is executed.*/
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
/*CASE1:
    class B: public A{
        order of execution of constructor -> A() then B()
    };
  CASE2:
    class A: public B, public C{
        order of execution of constructor -> B() then C() and A()
    };
  CASE3:
    class A: public B, public C{
        order of execution of constructor -> C() then B() and A()
    }*/
class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printDataBase1(void)
    {
        cout << "The value of base data1 is " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printDataBase2(void)
    {
        cout << "The value of base data2 is " << data2 << endl;
    }
};

class derived : public base1, public base2
{ // order of execution of constructor -> base1() then base2()
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor called" << endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived d(1, 2, 3, 4);
    d.printDataBase1();
    d.printDataBase2();
    d.printDataDerived();
    getch();
    return 0;
}