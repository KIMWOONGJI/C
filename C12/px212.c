#include<stdio.h>

int main(int argc, char const *argv[]) {
  char a='a';
  int b=1;
  float c=1.3f;
  double d=3.5;

  char* p1=&a;
  int* p2=&b;
  float* p3=&c;
  double* p4=&d;

  (*p1)++;
  (*p2)++;
  (*p3)++;
  (*p4)++;

  printf("%c\n", a);
  printf("%d\n", b);
  printf("%f\n", c);
  printf("%f\n", d);

  return 0;
}
