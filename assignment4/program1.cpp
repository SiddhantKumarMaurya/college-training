#include <iostream>
using namespace std;

class Shape {
protected:
    double width, height;
public:
    Shape(double w, double h) : width(w), height(h) {}
    virtual double area() = 0; // pure virtual function
};

class Triangle : public Shape {
public:
    Triangle(double w, double h) : Shape(w, h) {}
    double area() {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}
    double area() {
        return width * height;
    }
};

int main() {
    Triangle triangle(10, 5);
    Rectangle rectangle(10, 5);
    cout << "Area of triangle: " << triangle.area() << endl;
    cout << "Area of rectangle: " << rectangle.area() << endl;
    return 0;
}
