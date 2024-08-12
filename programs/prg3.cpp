#include<stdio.h>
using namespace std;

class A {
  virtual float add(float a, float b) = 0;
  virtual float sub(float a, float b) = 0;
  virtual float mul(float a, float b) = 0;
  virtual float div(float a, float b) = 0;
};

class B: public A {
  friend float add(float a, float b);

  friend float sub(float a, float b);
};

class C: public B {
  friend float mul(float a, float b);

  friend float div(float a, float b);
};

int main() {
  return 0;
}
