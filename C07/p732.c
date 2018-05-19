#include<stdio.h>

int main(int argc, char const *argv[]) {
  int i=0;
  int sum=0;

  do {
    sum+=(i%2==0)?i:0;
    i++;
  } while(i<=100);

  printf("Sum: %d\n", sum);
  return 0;
}
