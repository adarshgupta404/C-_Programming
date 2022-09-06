// Constructor Overloading : Using constructor more than one time 
// with different parameters.
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    Complex(int x, int y);
    Complex(int x);
    void printNum();
};

Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}

Complex::Complex(int x)
{
    a=x;
    b=0;
}

void Complex::printNum()
{
    cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
}
int main()
{
    Complex c1(4,6);
    c1.printNum();
    Complex c2(5);
    c2.printNum();
    getch();
    return 0;
}