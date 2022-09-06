#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;

class base{
private:
    int b;
protected: 
    int a;
public:

};
/* 
For a protected member:
                         Public derivation | Private Derivation | Protected Derivation
    1. private members     Not inherited   |   Not inherited    |   Not inherited
    2. protected members    protected      |    private         |    protected
    3. public members       public         |    private         |    protected
*/
class derived : protected base {
private:
    
protected: 
    
public:

};
int main()
{
base b;
derived d;
//cout<<d.a; // since a is protected in both base as well as derived class.


getch();
return 0;
}
