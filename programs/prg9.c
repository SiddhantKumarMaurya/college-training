#include<stdio.h>
void f(int n) {
  if (n > 0) {
    f(n - 1);
    f(n - 2);
    printf("%d ", n);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  f(n);
  return 0;
}
