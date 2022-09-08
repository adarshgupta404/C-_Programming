//Nesting Of Member Functions
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
class binary{
    string s;
    public:
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void display(void);
}b;

void binary::read(void){
    cout<<"Enter a binary no.: ";
    cin>>s;
}

void binary::chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }   
    }
    
}

void binary :: ones_compliment(void){ 
    //chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0'){
            s.at(i)='1';
        } 
        else if(s.at(i)=='1'){
            s.at(i)='0';
        }   
    }
    
}

void binary::display()
{
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
        }
    cout<<endl;
}

int main()
{
//binary b;
b.read();
b.chk_bin();
b.ones_compliment();
cout<<"Compliment of above binary: ";
b.display();

getch();
return 0;    
}