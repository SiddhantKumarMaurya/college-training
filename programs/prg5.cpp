#include<stdio.h>
#include<exception>
#include<windows.h>
using namespace std;
class OverSpeedException: public exception
{
  int speed;
  public:
  const char* what()
  {
    return "Over Speed Exception Raised: Check out car speed";
  }
  OverSpeedException(int speed) {
    this->speed = speed;
  }

  void getspeed() {
    cout<<"Your Car Speed is :"<<speed<<endl;
  }
};

class Car {
  int speed;
public:
  Car() {
    speed=0;
    cout<<"Car Speed is:"<<speed<<endl;
  }
  void runCar() {
    for(;;) {
      speed += 10;
      cout<<"Car Speed is "<<speed<<endl;
      Sleep(1500);
      if(speed>=120) {
        throw OverSpeedException(speed);
      }
    }
  }
};
int main() {
  Car c1;
  try {
    c1.runCar();
  } catch(OverSpeedException &err) {
    cout<<err.what()<<endl;
    err.getspeed();
  }
  cout<<"Don't Drink and Drive"<<endl;
  cout<<"Happy Journey !!"<<endl;
  return 0;
}
