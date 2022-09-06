/* Properties of Friend Function:
    1.  Not in the scope of class 
    2.  Since it is not in the scope of the class, oit cannot be called from
        the object of that class. c1.sumComplex()==Invalid.
    3.  Can be invoked without the help of any object.
    4.  Usually contains the objects as arrgument. 
    5.  Can be declared inside public or private section of the class.
    6.  It cannot access the member directly by their names and need
        object_name.mmember_name to access any member.*/
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

class Complex
{
private:
    int a;
    int b;
public:
    void setNumber(int n1, int n2);
    void printNumber();
    // non-member sumComplex function is allowed to do anything with 
    // my private parts(members)
    friend Complex sumComplex(Complex o1, Complex o2);
};

void Complex::setNumber(int n1, int n2)
{
    a = n1; //cout<<a; make sense
    b = n2;
}

void Complex::printNumber()
{
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
}

Complex sumComplex(Complex o1, Complex o2){
    Complex o3; //cout <<a ; doesn't make sense
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    
    return o3;
}

int main()
{
Complex c1, c2, sum;
c1.setNumber(1,4);
c2.setNumber(5,8);
c1.printNumber();
c2.printNumber();

sum = sumComplex(c1, c2);
sum.printNumber();
getch();
return 0;
}