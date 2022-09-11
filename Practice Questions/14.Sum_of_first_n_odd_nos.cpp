#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,sum = 0;
int a = 1;
printf("Enter number of terms : ");
scanf("%d",&n); //7
for (int i = 1; i <=n; i++)
{   
    if(a%2!=0)
    {
        sum = sum + a;
        a = a+2;
    }
}
printf("Sum of %d odds terms from 1st to %dth term : %d\n",n,n,sum);  // 1 + 3 + 5 + 7 + 9 + 11 + 13 = 49

getch();
return 0;
}