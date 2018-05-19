#include<stdio.h>

int main(int argc, char const *argv[]) {
  int arr[9],n;

  printf("Input the number for multiplication table: ");
  scanf("%d", &n);

  for (int i = 0; i < 9; i++) {
    arr[i]=n*(i+1);
  }

  for (int i = 1; i < 9; i+=2) {
    printf("%d * %d = %d\n", n, i+1, arr[i]);
  }

  return 0;
}
