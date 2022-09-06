#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list): initilization-section
{
    assignment + other code;
}
class Test{
    int a;
    int b;
public:
    Test(int i, int j) : a(i), b(j){constructor-body}
};
*/
class Test
{
    int a;
    int b;

public:
/*
    Test(int i, int j) : a(i),b(j) 
    Test(int i, int j) : a(i),b(i+j)
    Test(int i, int j) : a(i),b(2*j)
    Test(int i, int j) : a(i),b(a+j)
    Test(int i, int j) : b(j), a(i+b)//a = garbage value, 
    we have to initialize be before 'a' in private mode.
*/
    Test(int i, int j) : a(i),b(a+j)
    {
        //a = i; b = j;
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    Test t(4,6);
    
    getch();
    return 0;
}