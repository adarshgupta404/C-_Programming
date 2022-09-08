#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
using namespace std;
/*
[Using the member function open:]
The member function open is used to connect the text file to the
C++ program when passed into it.

Understanding the snippet below:

1.Unlike what we did earlier passing the text file in the object 
while creating it, we’ll first just declare an object out(any name you wish) 
of the type ofstream and use its open method to open the text file 
in the program.
2.We’ll pass some string lines to the text file using the out operation.
3.We’ll now close the file using the close function. Now closing is 
explicitly used to make the system know that we are done with the file. 
It is always good to use this.

This was all about writing to a file. We’ll now move to the eof 
function’s vitality in File I/O.

[Using the member function eof:]
The member function eof(End-of-file) returns a boolean true if the file 
reaches the end of it and false if not. 

Understanding the snippet below:

1.We’ll first declare an object in(any name you wish) of the type
ifstream and use its open method similar to what we did above, 
to open the text file in the program.
2.And now, we’ll declare the string variable st to store the content 
we’ll receive from the text file sample60.txt.
3.Now since we not only want the first or some two or three strings 
present in the text file, but the whole of it, and we have no idea 
of what the length of the file is, we’ll use a while loop.
4.We’ll run the while loop until the file reaches the end of it, 
and that gets checked by using eof() , which returns 1 or true if 
the file reaches the end. Till then a 0 or false.
5.We’ll use getline to store the whole line in the string variable st. 
Don’t forget to include the header file <string>.

This program now successfully prints the whole content of the text file.*/
int main()
{
    // declaring an object of the type ofstream
    ofstream out;
 
    //connecting the object out to the text file using the member 
    //function open()
    out.open("sample60.txt");
 
    //writing to the file
    out <<"This is me\n";
    out <<"This is also me";
    //closing the file connection
    out.close();

    // declaring an object of the type ifstream
    ifstream in;
    //declaring string variable st
    string st;
    //opening the text file into in
    in.open("sample60.txt");
 
    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof()==0) 
    {
        // using getline to fill the whole line in st
        getline(in,st);
        cout<<st<<endl;
    }


getch();
return 0;
}