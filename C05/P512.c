#include<stdio.h>

int main(int argc, char const *argv[]) {
  double val1, val2;

  printf("Input the two real numbers:");
  scanf("%lf %lf\n", &val1, &val2);

  printf("addition      :%f\n", val1+val2);
  printf("substraction  :%f\n", val1-val2);
  printf("multiplication:%f\n", val1*val2);
  printf("division      :%f\n", val1/val2);
  return 0;
}
