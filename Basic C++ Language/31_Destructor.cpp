/*Destructor:
    Destructor is an instance member function which is invoked
    automatically whenever an object is going to be destroyed.
    Meaning, a destructor is the last function that is going to be
    called before an object is destroyed.
    The thing is to be noted here, if the object is created by using new
    or the constructor uses new to allocate memory which resides in the
    heap memory or the free store, the destructor should use delete to
    free the memory.
    Syntax:
    ~constructor-name();

    Properties
    1. Destructor function is automatically invoked when the objects
       are destroyed.
    2. It cannot be declared static or const.
    3. The destructor does not have arguments.
    4. It has no return type not even void.
    5. An object of a class with a Destructor cannot become a member
       of the union.
    6. A destructor should be declared in the public section of the class.
    7. The programmer cannot access the address of destructor.

    When is destructor called?
    A destructor function is called automatically when the object goes out of scope:
    (1) the function ends
    (2) the program ends
    (3) a block containing local variables ends
    (4) a delete operator is called

    Q1. How are destructors different from a normal member function?
    Destructors have same name as the class preceded by a tilde (~)
    Destructors do not take any argument and do not return anything

    Q2. Can there be more than one destructor in a class?
    No, there can only one destructor in a class with classname preceded by ~, no parameters and no return type.

    Q3. When do we need to write a user-defined destructor?
    If we do not write our own destructor in class, compiler creates a default
    destructor for us. The default destructor works fine unless we have
    dynamically allocated memory or pointer in class. When a class contains
    a pointer to memory allocated in class, we should write a destructor to
    release memory before the class instance is destroyed. This must be done
    to avoid memory leak.

*/
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;

int count = 0;

class num
{
private:
    
public:
    num();
    ~num();
};

num::num()
{
    ::count++;
    cout<< "This is the time when constructor is called for object number "
        << ::count << endl;
}

num::~num()
{
    cout<< "This is the time when destructor is called for object number "
        << ::count << endl;
    ::count--;
}

int main()
{
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more object"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to the main"<<endl;
    getch();
    return 0;
}