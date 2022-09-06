// Multiple Inheritance
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
/* Syntax:
class {{derived-class-name}} : {{visibility mode}} base-class-name1,base-class-name2
{
    class member/methods/etc.
};
*/
class Base1
{
private:
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
private:
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Base3
{
private:
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << base2int << endl;
        cout << "The value of Base3 is " << base3int << endl;
        cout << "The value of Base1+Base2+Base3 is " << base1int + base2int + base3int << endl;
    }
};

int main()
{
    Derived harry;
    harry.set_base1int(25);
    harry.set_base2int(5);
    harry.set_base3int(10);
    harry.show();
    getch();
    return 0;
}