#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
union money m1;
m1.rice = 34;
m1.car = 'c'; //overwrites 
cout<<m1.rice<<endl;//throws a garbage value
cout<<m1.car<<endl;//true value 
//enum
enum meal{Breakfast, Lunch, Dinner};
meal ml1 = Lunch;
cout<<(ml1==1)<<endl;//1 (true)
cout<<Breakfast;
cout<<Lunch;
cout<<Dinner;

getch();
return 0;    
}