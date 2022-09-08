/* Concept of friend function and parameterized constructor */
#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;
class Point
{
private:
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint(){
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
    }
    friend float distance(Point, Point);
};

float distance(Point p, Point q) 
{
        float dis = pow((p.x-q.x)*(p.x-q.x) + (p.y-q.y)*(p.y-q.y),0.5);
        cout<<"The distance between the two point is "<<dis<<endl;

}

int main()
{
    Point p(1, 1);
    p.displayPoint();
    Point q(4, 6);
    q.displayPoint();
    distance(p,q);

    Point g(0, 1);
    g.displayPoint();
    Point h(0, 6);
    h.displayPoint();
    distance(g,h);

    Point k(1, 0);
    k.displayPoint();
    Point l(70, 0);
    l.displayPoint();
    distance(k,l);
   
    getch();
    return 0;
}