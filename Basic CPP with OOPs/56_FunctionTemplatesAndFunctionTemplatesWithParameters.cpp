// Function Templates & Function Templates with Parameters
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
/*float funcAverage(int a, int b){
    float avg= (a+b)/2.0;
    return avg;
}*/
template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
template <class T = int>
void swapp1(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
template <class T = int>
void swapp2(T &a, T &b)
{
    a=a^b;
    b=a^b;
    a=a^b;
}
void display(int x, int y)
{   
    cout<<"x : "<<x<<" ";
    cout<<"y : "<<y<<endl;
}
int main()
{
    float a;
    a = funcAverage(5, 2.8);
    printf("The average of these numbers is %f", a);
    printf("\n");
    
    int x=5,y=6;
    display(x,y); //x : 5 y : 6
    swapp1(x,y);
    display(x,y); // x : 6 y : 5
    swapp2(x,y);
    display(x,y); // x : 5 y : 6
    return 0;
}
