#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

int glo=9;
void sum()
{
    int a;
}


int main()
{
int glo = 15;
int a = 14, b = 15;
float pi = 3.14;
char c ='c';
bool is_true = true;
sum();
cout<<"Value of a is: "<<a<<"\nValue of b is : "<<b;
cout<<"\nPi Value : "<<pi;
cout<<"\nc Value : "<<c<<endl;
cout<<"Local: "<<glo<<endl; //15
cout<<"Global: "<<::glo<<endl; //9
cout<<"Boolean: "<<is_true<<endl; //1

getch();
return 0;    
}