// Member Function Templates & Overloading Template Functions
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harry<T> :: display(){
    cout<<data;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
    Harry<int> h(5.7);
    cout << h.data << endl;
    h.display();
    cout << endl;
    func(4); // Exact match takes the highest priority
    func1(4);
getch();
return 0;
}