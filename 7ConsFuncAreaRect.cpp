//7.Write a program to print the area of a rectangle by creating a class named 'Area'
//taking the values of its length and breadth as parameters of its constructor and
//having a function named 'returnArea' which returns the area of the rectangle.
//Length and breadth of the rectangle are entered through keyboard.

#include<bits/stdc++.h>
using namespace std;

class Area{
public:
    float l;
    float b;
    Area(float l,float b){
        this->l=l;
        this->b=b;
    }
    float returnArea(float l, float b)
    {
        return l * b;
    }
};

int main()
{
    float length, breadth;
    cin >> length >> breadth;
    Area a(length, breadth);
    cout << a.returnArea(length, breadth) << endl;
}