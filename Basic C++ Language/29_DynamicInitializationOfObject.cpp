// Dynamic Initialization Of Object Using Constructor
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
class BankDeposit
{
private:
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit();
    BankDeposit(int p, int y, float r); // r = 0.4
    BankDeposit(int p, int y, int r);   // r = 4
    void show();
};

BankDeposit::BankDeposit() {}
BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}

void BankDeposit::show()
{
    cout << endl
         << "Principal amount was " << principal << endl
         << "Return valur after " << years;
    if (years == 1)
    {
        cout << " year is ";
    }
    else
    {
        cout << " years is ";
    }
    cout << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y and r :" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();
    
    cout << endl
         << endl;
    
    cout << "Enter the value of p, y and r :" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    getch();
    return 0;
}