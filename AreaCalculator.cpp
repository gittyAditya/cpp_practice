//Write a program that defines a shape class with a constructor that gives value to width and height. 
// Then define two subclasses triangle and rectangle, then calculate the area of the shape with function area(). 
// In the main, define two variables a triangle and a rectangle 
// and then call the area() function for these two variables.

#include <iostream>

using namespace std;

class Shape {

public:
    float width;
    float height;
    Shape(){
        width = 30;
        height = 50;
    }

    float area();
};

class Triangle : public Shape{
public:
    float area(){
        float areaTri = (width*height)/2;
        return areaTri;
    }
};

class Rectangle : public Shape{
public:
    float area(){
        float areaRec = width*height;
        return areaRec;
    }
};

int main() {
    Triangle tri;

    Rectangle rect;

    cout << tri.area() <<" " << rect.area() << endl;


}