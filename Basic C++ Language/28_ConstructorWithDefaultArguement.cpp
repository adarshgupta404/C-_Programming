// ConstructorWithDefaultArguement
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
class Simple
{
    private:
        int d1,d2;
    public:
        Simple(int a, int b = 9)
        {
            d1 = a;
            d2 = b;
        }
        void printData(){
            cout<<"The value of Data1 and Data 2 is "<<d1<< " and " <<d2<<endl;
        }
};
int main()
{
Simple s1(1), s2(1,4); 
s1.printData();
s2.printData();
// The value of Data1 and Data 2 is 1 and 9
// The value of Data1 and Data 2 is 1 and 4

getch();
return 0;
}