#include<iostream>
using namespace std;
class Daddy {
  public:
  virtual void logic() {
    cout<<"Daddy Class Logic !!"<<endl;
  }
};

class Child1:public Daddy {
public:
  void logic() {
    cout<<"Child - 1 Logic !!"<<endl;
  }
};

class child2:public Child1 {
public:
  void logic() {
    cout<<"Child - 2 Logic !!!"<<endl;
  }
};

int main() {
  cout<<Daddy().logic()<<endl;
}
