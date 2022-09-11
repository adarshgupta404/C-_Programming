#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
bool isPalindrome(string &str, int start, int end)
{
    if(start>=end)
        return true;
    return (str[start]==str[end])&&isPalindrome(str, start+1, end-1);
}
int main()
{
string str;
cin>>str;
int start = 0;
int end = str.length() - 1;
if (isPalindrome(str, start, end))
    cout<<"Palindrome";
else
    cout<<"Not Palindrome";
getch();
return 0;    
}