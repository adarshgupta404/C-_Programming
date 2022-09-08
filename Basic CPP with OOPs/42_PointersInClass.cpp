#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData(void)
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    //Complex c1;
    //Complex *ptr = &c1;
    Complex *ptr = new Complex;
    ptr->setData(1,54);
    ptr->getData();
    //(*ptr).setData(1,54);
    //(*ptr).getData();

    getch();
    return 0;
}