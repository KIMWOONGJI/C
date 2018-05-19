#include<stdio.h>

int main(int argc, char const *argv[]) {
  int start, end, sum=0;

  printf("Input the start number: ");
  scanf("%d", &start);

  printf("Input the end number: ");
  scanf("%d", &end);

  for ( ; start <= end; start++) {
    sum+=start;
  }

  printf("Sum: %d\n", sum);
  return 0;
}
