#include<stdio.h>
void f(int n) {
  if (n > 1) {
    printf ("%d ", n);
    f(n - 1);
    f(n - 2);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  f(n);
  return 0;
}
