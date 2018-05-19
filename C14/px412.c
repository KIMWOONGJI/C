#include<stdio.h>

int swap(int* pa, int* pb, int* pc);

int main(int argc, char const *argv[]) {
  int a=10;
  int b=20;
  int c=30;

  printf("a:%d\n", a);
  printf("b:%d\n", b);
  printf("c:%d\n", c);

  swap(&a, &b, &c);

  printf("a:%d\n", a);
  printf("b:%d\n", b);
  printf("c:%d\n", c);
  return 0;
}

int swap(int* pa, int* pb, int* pc) {
  int temp=*pa;
  *pa=*pc;
  *pc=*pb;
  *pb=temp;

  return 0;
}
