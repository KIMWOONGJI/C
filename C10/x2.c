#include<stdio.h>

void mtable(int);

int main(int argc, char const *argv[]) {
  int v1, v2;

  printf("Input 2 numbers for multiplication table: ");
  scanf("%d %d", &v1, &v2);

  int i ,j;
  v1<=v2?(i=v1, j=v2):(i=v2, j=v1);

  for ( ; i <= j; i++) {
    mtable(i);
  }
  return 0;
}

void mtable(int j) {
  for(int i=1; i<10; i++) {
    printf("%d * %d = %d\n", j, i, i*j);
  }
}
