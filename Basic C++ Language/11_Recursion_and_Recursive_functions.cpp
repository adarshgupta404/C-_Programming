// Recursion and Recursive functions
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
//1,1,2,3,5,8,12,.......
int fib(int n)
{
    if (n<2)
    {
        return n;
    }
    return fib(n-2)+fib(n-1);
}

int main()
{
int a;
cout<<"Enter a number: ";
cin>>a;
factorial(a);
cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
cout<<"The term in fabonacci sequence at position "<<a<<" is "<<fib(a)<<endl;


getch();
return 0;    
}