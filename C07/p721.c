#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i=0,
  n=0,
  sum=0;

  while(i<5){
    while(n<=0){
      printf("Input a number greater than 0(%d): ", i+1);
      scanf("%d", &n);
    }

    sum+=n;
    i++;
    n=0;
  }

  printf("Sum: %d\n", sum);

  return 0;
}
