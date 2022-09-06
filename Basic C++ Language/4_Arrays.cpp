#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
// Array : Collection of items of different types.
int marks[4]= {23,12,34,21};
int mathMarks[4];
mathMarks[0]=25;
mathMarks[1]=24;
mathMarks[2]=25;
mathMarks[3]=24;
cout<<"These are mathMarks:"<<endl;
cout<<mathMarks[0]<<endl;
cout<<mathMarks[1]<<endl;
cout<<mathMarks[2]<<endl;
cout<<mathMarks[3]<<endl;
cout<<"These are marks:"<<endl;
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;
cout<<"From for loop"<<endl;
for (int i = 0; i < 4; i++)
{
    cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
}
cout<<"From while loop"<<endl;
int i=0;
while (i!=4)
{
    cout<<"The value of mathMarks "<<i<<" is "<<mathMarks[i]<<endl;
i++;
}


getch();
return 0;    
}