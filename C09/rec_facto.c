/* rec_facto.c */

#include<stdio.h>

int f(int);

int main(int argc, char const *argv[]) {
  int val;
  int result;

  printf("Input a integer: ");
  scanf("%d", &val);

  if(val<0) {
    printf("You must input the number greater than 0.\n");
    return 1;
  }

  result=f(val);
  printf("%d!=%d\n", val, result);
  return 0;
}

int f(int n) {
  if (n==0) {
    return 1;
  } else {
    return n*f(n-1);
  }
}
