#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "The code of this item is " << id << endl;
        cout << "The price of this item is " << price << endl;
    }
};
int main()
{
    int size = 3, p, q;
    /*int *ptr = &size;
      int *ptr = new int[34];
      1.general store ittem
      2.veggies iyem
      3.hardware item*/
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout << "ID and Price of item : " << i + 1 << endl;
        cin >> p >> q;
        //(*ptr).setData(p,q);
        (ptr)->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Item Number : " << i + 1 << endl;
        (ptrTemp)->getData();
        ptrTemp++;
    }

    getch();
    return 0;
}