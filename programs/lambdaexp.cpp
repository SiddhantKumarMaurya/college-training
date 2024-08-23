#include<iostream>
using namespace std;
void logic() {
  cout<<"My Logic"<<endl;
}

int main() {
  void (*fptr1)() = &logic;
  void (*fptr2)() = [](){cout<<"LE"<<endl;};
  fptr1();
  fptr2();
  return 0;
}
