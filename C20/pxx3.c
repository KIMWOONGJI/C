#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]) {
  int i;

  printf("RAND_MAX: %d\n", RAND_MAX);

  for (int i = 0; i < 5; i++) {
    printf("%d\n", rand()%100);
  }

  return 0;
}
