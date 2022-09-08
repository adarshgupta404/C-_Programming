// pointers: data type which holds the address of other data type.
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a = 3;
int *b = &a;
// & --> (Address of) Address of operator
// * --> (value of) Dereference operator
cout<<"The Address of a is\n"<<b<<" (b)"<<endl<<&a<<" (&a)";
// shows address of a.
//if we want to find what value is saved in "b" (address) then:
cout<<"\nThe value at address b is "<<*b<<endl;
// Display: The value at address b is 3z

//pointer to pointer
int **c = &b;
cout<<"The address of b is "<<&b<<endl;
cout<<"The address of b is "<<c<<endl;
cout<<"The value of address c is "<<*c<<endl;
cout<<"The value of address value_at(value_at(c)) is "<<**c<<endl;
getch();
return 0;    
}