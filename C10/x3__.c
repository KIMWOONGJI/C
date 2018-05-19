#include<stdio.h>

int gcd(int, int);

int main(int argc, char const *argv[]) {
  int v1, v2;

  printf("Input 2 integers:");
  scanf("%d %d", &v1, &v2);

  printf("GCM: %d\n", gcd(v1, v2));

  return 0;
}

int gcd(int a, int b) {
  return b?gcd(b,a%b):a;
}

/*
eg.

22%55=22
55%22=11
22%11=0
11%0=undef.
|  |
|  +-> condition
+----> return

55%22=11
22%11=0
11%0=undef.

advantage: considering which one is greater than another is unnecessary.
