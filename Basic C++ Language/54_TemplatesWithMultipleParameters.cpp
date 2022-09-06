// Templates with Multiple Parameters
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
/*
template<class T1, class T2>
class nameOfClass{
    //body
}
*/
template <class T1, class T2>
class myClass
{
public:
    T1 data1; // int data1;
    T2 data2; // char data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << " " << this->data2;
    }
};

int main()
{
    //myClass<int, char> obj(1, 'c');
    // we are sending int and char values to myClass class with the help
    // of template with multiple parameters.
    myClass<int, char> obj(1, 'c');
    obj.display();

    getch();
    return 0;
}