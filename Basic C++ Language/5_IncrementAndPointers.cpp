#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

int marks[4]={32,99,38,51};
int *p = marks;
//cout<<p<<endl; // Shows address of p(32)
//cout<<p+1<<endl; // Shows address of p(99)
cout<<*p++<<endl; 
cout<<*p++<<endl;
cout<<*p++<<endl;
cout<<*p++<<endl;



getch();
return 0;    
}