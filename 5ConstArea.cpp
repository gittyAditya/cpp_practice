//Write a program to print the area of two rectangles having sides (4,5) and (5,8)
// respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area.
// Length and breadth are passed as parameters to its constructor.

#include <iostream>

using namespace std;

class Rectangle {
public:
    float length;
    float breadth;
    Rectangle (float length, float breadth) {
        this->length = length;
        this->breadth = breadth;
    };
    float area(){
        float area = length*breadth;
        return area;
    }
};

int main (){
    Rectangle r(30, 40);
    cout << r.area();
    return 0;

}