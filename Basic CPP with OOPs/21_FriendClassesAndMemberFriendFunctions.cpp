// Friend Classes and Member Friend Functions
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;

// Forwar Declaration
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumImComplex(Complex, Complex);
};
class Complex
{
private:
    int a, b;
    // Individually declaring functions as friends
    /*friend int Calculator::sumRealComplex(Complex o1, Complex o2);
      friend int Calculator::sumImComplex(Complex o1, Complex o2);*/
    // Aliter: Declaring the entire calculator the entire calculator class as friend
    friend class Calculator;
public:
    void setNumber(int n1, int n2);
    void printNumber();
};

void Complex::setNumber(int n1, int n2)
{
    a = n1;
    b = n2;
}

void Complex::printNumber()
{
    cout << "Your Number is " << a << " + " << b << "i" << endl;
}

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumImComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2, sum1, sum2;
    o1.setNumber(1, 2);
    o2.setNumber(5, 7);
    o1.printNumber();
    o2.printNumber();

    Calculator calc;
    int x = calc.sumRealComplex(o1, o2);
    int y = calc.sumImComplex(o1, o2);
    cout << "Your Number is " << x << " + " << y << "i" << endl;

    getch();
    return 0;
}