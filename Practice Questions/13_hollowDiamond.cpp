#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int n;
cin>>n;
int m = (n+1)/2;
for (int i = 0; i < n/2 +1; i++)
{
    for (int j = 1; j <=n; j++)
    {
        if(j==(m+i)||j==(m-i))
        cout<<"*\t";
        else
        cout<<"\t";
    }
    cout<<endl<<endl;
    
}
for (int i = n/2; i > 0; i--)
{
    for (int j = 1; j <=n; j++)
    {
        if(j==(m+i-1)||j==(m-i+1))
        cout<<"*\t";
        else
        cout<<"\t";
    }
    cout<<endl<<endl;
}

getch();
return 0;    
}