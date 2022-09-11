// Trailing Zeroes In Factorial
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
int factorial(int n)
{
    int res=1;
    for (int i = 1; i <= n; i++)
    {
        res = res*i;
    }
return res;
}
int countTrailingZeroes(int z)
{
    int zeroes = 0;
    for (int i = 5; i <=z; i = i*5)
    {
        zeroes = zeroes + z/i;
    }
return zeroes;
}
int main()
{
int n;
cin>>n;
cout<<factorial(n)<<endl;
cout<<countTrailingZeroes(n)<<endl;
getch();
return 0;    
}

