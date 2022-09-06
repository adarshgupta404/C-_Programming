// Memory Allocation And Using Array
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter(void) {counter = 0;}
    void getPrice(void); 
    void setPrice(void);
    void display(void);
};

void shop::setPrice(void){
    cout<<"Enter Id of your item no. "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop::display(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of item with ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
    
}
int main()
{
shop dukan;

int a;
cout<<"How many item you want to enter?"<<endl;
cin>>a;
dukan.initCounter();
for (int i = 0; i < a; i++)
{
    dukan.setPrice();
}
dukan.display();
getch();
return 0;
}