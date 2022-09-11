// Checking a number is prime or not. T(n) = O(pow(n,0.5)).
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
bool isPrime(int n)
{
if(n==1) return false;
if(n==2||n==3) return true;
if(n%2==0||n%3==0) return false;
for(int i = 5; i*i<=n; i=i+6)
{
    if(n%i==0||n%(i+2)==0) return false;
}
return true;
}
int main(){
int n;
cin>>n;
// check prime or not
if(isPrime(n)==1)
{
    cout<<"Prime";
}
else
{
    cout<<"Not Prime";
}
getch();
return 0;    
}