#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

int sum (int, int);
void swapPointer(int *x, int *y);
// Call by reference using C++ reference variables
void swapRefereceVar(int &x , int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
int a = 4;
int b = 5;
cout<<"\nThe sum of 4 and 5 is "<<sum(a,b);
cout<<"\nThe value of a is "<<a;
cout<<"\nThe value of b is "<<b;
cout<<endl;
//swapPointer(&a,&b);// Call by reference using pointers
//cout<<"\nThe value of a is "<<a;
//cout<<"\nThe value of b is "<<b;
cout<<endl;
swapRefereceVar(a,b);// Call by reference using C++ reference variables
cout<<"\nThe value of a is "<<a;
cout<<"\nThe value of b is "<<b;


getch();
return 0;    
}
// Call by reference using pointers
void swapPointer(int *x , int *y){
    int temp =*x;
    *x=*y;
    *y=temp;
}

int sum (int a , int b){
    int c = a+b;
    return c;
}
// will not swap the values
int swap(int a , int b){
    int temp = a;
    a=b;
    b=temp;
}