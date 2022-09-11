#include<iostream>
using namespace std;
int AnyToAny(int,int,int);
int DecToAny(int,int);
int AnyToDec(int,int);
int AnyToAny(int n, int b1, int b2) 
{
  //write your code here
  int dec = DecToAny(n, b1);
  int rest = AnyToDec(dec, b2); 
  return rest;
}
int DecToAny(int n, int b) {
//write your code here
int r = 0, bin = 0, place=1;
while(n!=0)
{
    r = n%b;
    n = n/b;
    bin = bin + (r*place);
    place = place * 10;
}
return bin;
}
int AnyToDec(int n, int b) 
{
//write your code here.
int p = 1, num = 0, digit = 0;
while(n>0)
{
    digit = n%10;
    num = num + p*digit;
    p = p*b;  
    n = n / 10;  
}
return num;
}
int main() {
  int n;
  int b1;
  int b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
  int res = AnyToAny(n, b1, b2);
  cout << res << endl;
  return 0;
}