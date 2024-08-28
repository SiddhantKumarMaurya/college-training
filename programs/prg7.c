#include<stdio.h>
void f(int);
int main() {
  int n; scanf("%d", &n); 
  f(n);
  return 0;
}

void f(int n) {
  if (n > 0) {
    f(n - 1);
    printf("%d ", n);
    f(n - 1);
  }
}
