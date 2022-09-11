#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n;
cin>>n;
string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int nums[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
string ans = "";
for (int i = 1; i < 13; i++)
{
    while(n-nums[i]>=0)
    {
        ans = ans + romans[i];
        n = n - nums[i];
    }
}
cout<<ans;
getch();
return 0;    
}