/*
1)
WAP that defines a shape class with a constructor that gives value to width and height.
The define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
In the main, define two variables a triangle and a rectangle and then call the area() function in
this two varibles.

Area of the triangle: 225
Area of the rectangle: 18

	

*/
#include <iostream>

using namespace std;

class Shape {
public:
    int width;
    int height;

public:
    Shape(int w,int h) {
        width = w;
        height = h;
    }

    int area() {
       return 0;
    }
};

class Triangle : public Shape {
public:
    Triangle(int w, int h) : Shape(w, h) {}

    int area()  {
     return 5*width*height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int w,int h):Shape(w,h) {}

    int area()  {
        return 3*width*height;
    }
};

int main() {
    Triangle trio(5,9);
    Rectangle ract(2,3);

    cout << "Area of the triangle: " << trio.area() << endl;
    cout << "Area of the rectangle: " << ract.area() << endl;

    return 0;
}
