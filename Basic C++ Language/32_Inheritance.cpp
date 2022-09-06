#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
class Employee// BASE class
{
private:
    
public:
    int id;
    float salary;
    Employee(int impID){
        impID = 1;
        salary = 34.0;
    }
    Employee(){}
};

//Derived class
/* 
Notes:
1.  Default visibility mode is private
2.  Public Visibility Mode: Public members of the base class becomes public members of the derived class.
3.  Private Visibility Mode: Public members of the base class becomes private members of the derived class.
4.  Private members are never inherited.

class {{derived-class-name}} : {{visibility mode}} base-class-name 
{
    class member/methods/etc.
};
*/

class Programmer : private Employee
{
public:
    int languageCode = 9;
    Programmer (int impID){
        id = impID;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
Employee harry(1), rohan(2);
cout<<harry.salary<<endl;
cout<<rohan.salary<<endl;
Programmer skillF(10);
cout<<skillF.languageCode<<endl; 
skillF.getData(); 
//cout<<skillF.id<<endl; // can't print because it is now private member of base class.
getch();
return 0;
}