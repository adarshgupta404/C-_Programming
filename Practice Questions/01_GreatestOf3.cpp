#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int x, y, z;
cin>>x>>y>>z;
if(x>y)
{
    if(x>z)
    {
        cout<<"x is the greatest";
    }
    else
    {
        cout<<"z is the greatest";
    }
}
else 
{
    if(y>z)
    {
        cout<<"y is the greatest";
    }
    else
    {
        cout<<"z is the greatest";
    }
}
getch();
return 0;    
}