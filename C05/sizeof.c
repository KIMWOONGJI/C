#include "stdio.h"

int main(int argc, char const *argv[]) {
  char c=10;
  int i=3048;
  double f=3.1415;

  printf("size of variable c: %lu\n", sizeof c);
  printf("size of variable i: %lu\n", sizeof i);
  printf("size of variable f: %lu\n", sizeof f);

  printf("allocated memory of char        : %lu bytes\n", sizeof(char));
  printf("allocated memory of short       : %lu bytes\n", sizeof(short));
  printf("allocated memory of int         : %lu bytes\n", sizeof(int));
  printf("allocated memory of long        : %lu bytes\n", sizeof(long));
  printf("allocated memory of float       : %lu bytes\n", sizeof(float));
  printf("allocated memory of double      : %lu bytes\n", sizeof(double));
  printf("allocated memory of long double : %lu bytes\n", sizeof(long double));

  printf("%d\n", argc);
  printf("%s\n", *argv);

  return 0;
}
