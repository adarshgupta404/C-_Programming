#include <iostream>
using namespace std;
template <class T>
class vector
{ // Writing a program using template
    public:
        T *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new T[size];
        }
    T dotProduct(vector &v){
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i] * v.arr[i];
        }
        return d;
    }
};
 
int main()
{
    cout<<"Dot Product of Integer: ";
    vector<int> v1(3); //vector 1
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector<int> v2(3); //vector 2
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a = v1.dotProduct(v2);
    cout<<a<<endl;

    cout<<"Dot Product of Float:   ";
    vector<float> w1(3); //vector 1 with a float data type
    w1.arr[0] = 1.4;
    w1.arr[1] = 3.3;
    w1.arr[2] = 0.1;
    vector<float> w2(3); //vector 2 with a float data type
    w2.arr[0]=0.1;
    w2.arr[1]=1.90;
    w2.arr[2]=4.1;
    float b = w1.dotProduct(w2);
    cout<<b<<endl;
    return 0;
}
