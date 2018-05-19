#include<stdio.h>

int square(int);

int main(int argc, char const *argv[]) {
  int a;

  printf("Input a number: ");
  scanf("%d", &a);

  a=square(a);

  printf("Its squared is %d.\n", a);

  return 0;
}

int square(int a) {
  return a*a;
}
