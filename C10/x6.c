#include<stdio.h>

int main(int argc, char const *argv[]) {
  int is, h, m, s;

  printf("Input the number in second: ");
  scanf("%d", &is);

  h=is/3600;
  m=(is-h*3600)/60;
  s=is-h*3600-m*60;

  printf("[h:%2d, m:%2d, s:%2d]\n", h, m, s);

  return 0;
}
