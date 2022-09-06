// Array of Objects
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

class Employee
{
    int ID;
    int salary;
    public:
    void setID(){
        salary = 122;
        cout<<"Enter ID of this Employee: ";
        cin>>ID;
    }
    void getID(){
        cout<<"The ID of this Employee: "<<ID<<endl;
    }
};//harry, rohan, lavish, shruti
int main()
{
//harry.setID();
//harry.getID();
//rohan.setID();
//rohan.getID()
Employee fb[4];
for (int i = 0; i < 4; i++)
{
    fb[i].setID();
    fb[i].getID();
}

getch();
return 0;
}