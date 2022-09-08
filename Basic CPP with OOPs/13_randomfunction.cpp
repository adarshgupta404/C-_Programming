#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
srand(time(0));
cout<<rand()%6+1<<endl; //dice roll [1,6]
int a = rand()%2+1; //flip a coin [1,2]
if (a==1)
{cout<<"Heads";} 
else if (a==2)
{cout<<"Tails";}
getch();
return 0;    
}