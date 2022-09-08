/* Constructor Characteristics :
    1.  It should be declared in the public section of the class.
    2.  They are auto matically invoked whenver the object is created.
    3.  Do not have return types and don't have return types.
    4.  It can have default arguments.
    5.  We can not refer to their address.
    */
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
    int a, b;

public:
    // Creating a constructor
    /*  Constructor is a special member function with the same as of the class.
        It is used to initialize the objects of its class.
        It is automaticaly invoked whenever an object is created. */

    Complex(void); // Constructor declaration
    void printNumber(void);
};

Complex ::Complex(void) // This is a default constructor as it takes no parameters
{
    a = 0;
    b = 0;
    cout<<"Hello World!"<<endl;
}

void Complex::printNumber(void)
{
    cout << "Your Number is " << a << " + " << b << "i" << endl;
}
int main()
{
    Complex x, y, z;
    x.printNumber();
    y.printNumber();
    z.printNumber();

    getch();
    return 0;
}