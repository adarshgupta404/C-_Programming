#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
//inline function
inline int product(int a, int b)
{
    //Not recommended to use below lines with inline functions
    //static int c = 0;// This executes only once
    //c = c + 1;// Next time this function will run, the value of c will be retained
    return a*b;
}

int moneyRecieved(int currMoney, double factor = 1.04)
{
    return currMoney * factor;
}
int main()
{
int money = 100000;
cout<<"if you have Rs. "<<money<<" in your bank account, you will recieve Rs. "<<moneyRecieved(money)<<" after 1 year."<<endl;
cout<<"For VIP: if you have Rs. "<<money<<" in your bank account, you will recieve Rs. "<<moneyRecieved(money,1.1)<<" after 1 year."<<endl;
//int a, b;
//cout<<"Enter the value of a and b"<<endl;
//cin>>a>>b;
//cout<<"Enter the product of a and b is "<<product(a,b)<<endl;
//cout<<"Enter the product of a and b is "<<product(a,b)<<endl;
//cout<<"Enter the product of a and b is "<<product(a,b)<<endl;
//cout<<"Enter the product of a and b is "<<product(a,b)<<endl;
//cout<<"Enter the product of a and b is "<<product(a,b)<<endl;
//cout<<"Enter the product of a and b is "<<product(a,b)<<endl;
//cout<<"Enter the product of a and b is "<<product(a,b)<<endl;
//cout<<"Enter the product of a and b is "<<product(a,b)<<endl;
//cout<<"Enter the product of a and b is "<<product(a,b)<<endl;
//cout<<"Enter the product of a and b is "<<product(a,b)<<endl;

getch();
return 0;    
}