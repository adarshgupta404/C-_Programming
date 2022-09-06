/*Function overloading is a feature of object oriented 
programming where two or more functions can have the same
name but different parameters.
When a function name is overloaded with different 
jobs it is called Function Overloading.*/
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

int sum (int a , int b){ //function with 2 arguments
    return a+b;
}
int sum (int a, int b, int c){  //function with 2 arguments
    return a+b+c;
}
int area (int a, int b){ //Rectangle
return a*b;
}
int area (int a){ //square
return pow(a,2);
}
int main()
{
cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
cout<<"The sum of 3, 8 and 9 is "<<sum(3,8,9)<<endl;
cout<<"The area of rectangle with dimensions 3 and 9 is "<<area(3,9)<<endl;
cout<<"The area of square with side equals 3 is "<<area(3)<<endl;
getch();
return 0;    
}