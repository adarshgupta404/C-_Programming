//Static Data Member And Methods
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
private:
    static int count;// by default the count value is (ZERO) in static.
    // can not change the value of count from here
    int id;
public:
    void setData(void);
    void getData(void);

    static void getCount(void){
        // cout<<id; // throws an error 
        cout<<"The value of count is "<<count<<endl;
    }
} rohan, lavish;

void Employee::setData(void)
{
    cout<<"Enter the ID"<<endl;
    cin>>id;
    count++;
}

void Employee::getData(void)
{
    cout<<"The ID of the employee is "<<id<<" and this is employee number "<<count<<endl;
}
// Count is the static data member of class Employee.
int Employee::count;// can change the value of count from here like count = 1000;
int main()
{
Employee harry;
harry.setData();
harry.getData();
Employee::getCount();

rohan.setData();
rohan.getData();
Employee::getCount();

lavish.setData();
lavish.getData();
Employee::getCount();

getch();
return 0;
}