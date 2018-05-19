#include<stdio.h>

int pow2(int);

int main(int argc, char* argv[]) {
  int n;

  printf("Input a positive number: ");
  scanf("%d", &n);

  printf("2 to the power of %d is %d\n", n, pow2(n));

  return 0;
}

int pow2(int n) {
  return n?2*pow2(n-1):1;
}
