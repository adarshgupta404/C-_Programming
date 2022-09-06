// More on friend function
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
// Forward Declaration
class Y;
class X{
    private:
        int data;
    public:
        void setValue(int val){
            data = val;
        }
    friend void add(X,Y); 
};

class Y{
    private:
        int num;
    public:
        void setValue(int val){
            num = val;
        }
    friend void add(X,Y); 
};

void add(X o1, Y o2){
    cout<<"Summing datas of X and Y objects gives me "<<o1.data+o2.num<<endl;
}
int main()
{
X a1;
a1.setValue(3);

Y b1;
b1.setValue(5);

add(a1 ,b1);
getch();
return 0;
}