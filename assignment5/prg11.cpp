#include<iostream>
using namespace std;
typedef struct s {
  char a;
  char b;
  int c;
} s;

typedef struct t {
  char a;
  int c;
  char b;
} t;

int main() {
  cout<<"Size: "<<sizeof(s)<<endl;
  cout<<"Size: "<<sizeof(t)<<endl;
  return 0;
}
