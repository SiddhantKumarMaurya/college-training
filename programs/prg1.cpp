#include<iostream>

using namespace std;
class Shape {
public:
  float PI = 3.14;
  float area(float a) {
    return a*a;
  }

  float area(float a, float b) {
    return a*b;
  }

  double area(double r) {
    return PI * r * r;
  }
};

int main() {
  cout<<"Area of square: "<<Shape().area((float)4.0)<<endl;
  cout<<"Area of rectangle: "<<Shape().area(4.0, 5.0)<<endl;
  cout<<"Area of circle: "<<Shape().area(3.0)<<endl;
  cout<<"Area of square: "<<Shape().area((float)3.0)<<endl;
}
