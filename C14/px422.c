#include<stdio.h>

void print(const int *paa);

int main(int argc, char const *argv[]) {
  int a=10;
  int *pa=&a;

  print(pa);

  return 0;
}

void print(const int *paa) {
  printf("%d\n", *paa);

  int *paaa=paa;
  *paaa=20;
}
