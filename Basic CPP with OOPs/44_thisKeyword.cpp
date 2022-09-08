#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int a;

public:
    //A &  setData(int a)
    void setData(int a)
    {
        // 'this' is a keyword which is a pointer which points to the object
        // which invokes the member function
        this->a = a;
        //return *this;
    }
    void getData(void)
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
A a;
a.setData(2);
a.getData();
getch();
return 0;
}