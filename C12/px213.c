#include<stdio.h>

int main(int argc, char const *argv[]) {
  int a=10, b=20;
  int* p1=&a;
  int* p2=&b;
  int* temp;

  (*p1)--;
  (*p2)--;

  temp=p1;
  p1=p2;
  p2=temp;

  printf("*p1:%d\n", *p1);
  printf("*p2:%d\n", *p2);

  return 0;
}
