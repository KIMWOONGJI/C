#include<stdio.h>

int main(int argc, char const *argv[]) {
  int np[5], npsum=0;

  for (int i = 0; i < 5; i++) {
    printf("Input the number of person on the floor(%d): ", i+1);
    scanf("%d", &np[i]);
    npsum+=np[i];
  }

  printf("Total number of person: %d\n", npsum);

  return 0;
}
