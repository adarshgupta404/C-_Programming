#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[] = {1,2,3,0,4,9,4,4,4,8}; // 10
	int n1 = sizeof(arr)/sizeof(arr[0]);
	cout<<"sizeof(arr)/sizeof(arr[0]) : "<<n1<<endl;
	
	int n2 = *(&arr + 1) - arr;
	cout<<"*(&arr + 1) - arr : "<<n2;
	return 0;
getch();
return 0;    
}