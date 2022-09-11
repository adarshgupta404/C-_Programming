#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{
    int flag, length;
    flag = 0;
    string str1, str2;
    cin >> str1;
    str2 = str1;
    length = str1.length();
   
   // reverse(str2.begin(), str2.end());
    
    for (int i = 0; i < length; i++)
    {
        
        if(str1[i] == str1[length - i - 1]){
            flag = 1;
        }
        else{
            flag = 0;
        }
    }
    
    
 /* for (int i = 0; i < length; i++)
    {
        str2[i] = str1[length - i - 1];
    }
*/
    /*if (str2 == str1)
    {
        flag = 1;
    }*/
    if (flag == 1)
    {
        cout << str2 << " IS A PALINDROME!"<<endl;
    }
    else
    {
        cout << str2 << " IS NOT A PALINDROME!"<<endl;
    }
    getch();
    return 0;
}