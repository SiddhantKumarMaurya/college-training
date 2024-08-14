#include<stdio.h>
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
  printf("The size: %lu", sizeof(s));
  printf("The size: %lu", sizeof(t));
  return 0;
}
