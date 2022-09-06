// Default And Paramiterised Constructor
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    Complex(int, int);
    void printNumber(void);
};

/*Complex ::Complex(void) // This is a default constructor as it takes no parameters
{
    a = 0;
    b = 0;
    cout<<"Hello World!"<<endl;
}*/

Complex ::Complex(int x, int y) // This is a parameterized constructor as it takes two parameters
{
    a = x;
    b = y;
}

void Complex::printNumber(void)
{
    cout << "Your Number is " << a << " + " << b << "i" << endl;
}
int main()
{
    // Implicit Call
    Complex x(4, 6);

    // Explicit Call
    Complex y = Complex(5, 7);

    x.printNumber();
    y.printNumber();

    getch();
    return 0;
}