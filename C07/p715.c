#include<stdio.h>

int main(int argc, char const *argv[]) {
  int i=0,
  j,
  n,
  sum;

  printf("Input a number of integers: ");
  scanf("%d", &n);

  while(i<n){
    printf("Input a integer: ");
    scanf("%d", &j);
    sum+=j;

    i++;
  }

  printf("Average of integers: %f\n", (double)sum/n);
  return 0;
}
