#include<iostream>
#include<exception>
#include<stdexcept>
using namespace std;
int main() {
  string str = " at GNIOT College ";
  cout<<"Welcome Dear ---"<<endl;
  try {
    cout<<string("Be Creative with us...").substr(32);
  } catch(out_of_range& e) {
    cout<<"Any custom message"<<endl;
  }
  cout<<string("Train your Brain");
  cout<<str;
  return 0;
}
