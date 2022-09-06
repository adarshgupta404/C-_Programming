#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
//Function Prototyping
//type functionName(arguments);
int sum (int a, int b);// acceptable
// int sum (int a, b);// not acceptable
// int sum (int , int );// acceptable

void greet(void);

int main()
{
greet();       
int n1,n2;
cout<<"\nEnter 1st No.: ";
cin>>n1;
cout<<"\nEnter 2nd No.: ";
cin>>n2;
// n1 and n2 are actual parameters.
cout<<"\nSum is "<<sum(n1,n2);

getch();
return 0;    
}
int sum(int a, int b)
{
// a and b will be  taking values from 
// actual parameters n1 and n2.
int c = a+b;
return c;
}

void greet()
{
    cout<<"Hello, Goodmorning!";
}