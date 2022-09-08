#include <iostream>
using namespace std;
// Templates
/*A template is believed to escalate the potential of C++ several fold 
by giving it the ability to define data types as parameters making it 
useful to reduce repetitions of the same declaration of classes for 
different data types. Declaring classes for every other data type
(which if counted is way too much) in the very first place violates 
the DRY( Don’t Repeat Yourself) rule of programming and on the other 
doesn't completely utilise the potential of C++.

It is very analogous to when we said classes are the templates for 
objects, here templates itself are the templates of the classes. 
That is, what classes are for objects, templates are for classes.*/
template <class T>
class vector {
    T *arr;
    int size;
    public:
        vector(T *arr){
            //code
        }
        //and many other methods
    
};
 
int main() {
    vector<int> myVec1(); //myVec1() -> function
    vector<float> myVec2();
    vector<char> myVec3();
    return 0;
}
