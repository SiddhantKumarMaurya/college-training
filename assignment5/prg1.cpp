#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double area() = 0; // Pure virtual function
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() override {
        return width * height;
    }
};

int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    std::cout << "Area of Circle: " << shape1->area() << std::endl;
    std::cout << "Area of Rectangle: " << shape2->area() << std::endl;

    delete shape1;
    delete shape2;

    return 0;
}
