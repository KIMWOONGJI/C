#include<stdio.h>

int main(int argc, char const *argv[]) {
  int i=2,
  j=1;

  do {
    do {
      printf("%d * %d = %d\n", i, j, i*j);
      j++;
    } while(j<=9);
    j=1;
    i++;
  } while(i<=9);
  return 0;
}
