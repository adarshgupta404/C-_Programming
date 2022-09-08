// More on friend function
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2;
    }
};

void exchange(c1 &x, c2 &y)
{
    int temp;
    temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);

    cout << "The value after exchanging becomes ";
    oc1.display();
    cout << endl;
    cout << "The value after exchanging becomes ";
    oc2.display();
    cout << endl;
    getch();
    return 0;
}