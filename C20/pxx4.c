#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[]) {
  srand((unsigned int)time(NULL));
  for (int i = 0; i < 10; i++) {
    printf("%d %d\n", rand()%6+1, rand()%6+1);
  }
  return 0;
}
