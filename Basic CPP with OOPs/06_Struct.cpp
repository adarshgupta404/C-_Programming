#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
//struct employee 
//{
//    int eID;
//    char favChar;
//    float salary;
//};
typedef struct employee 
{
    int eID;
    char favChar;
    float salary;
}ep;

int main()
{
ep Harry;//struct employee Harry
Harry.eID = 1;
Harry.salary = 120000000;
Harry.favChar = 'c';
cout<<Harry.eID<<endl;
cout<<Harry.favChar<<endl;
cout<<Harry.salary<<endl<<endl;

ep Rohan;//struct employee Rohan
Rohan.eID = 2;
Rohan.salary = 120000000;
Rohan.favChar = 'b';
cout<<Rohan.eID<<endl;
cout<<Rohan.favChar<<endl;
cout<<Rohan.salary<<endl;

getch();
return 0;    
}