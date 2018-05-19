#include <stdio.h>

int main(int argc, char const *argv[]) {
  int j=1;
  for (int i = 0, j=0; i < 5; i++) {
    printf("%d %d\n", i, j);
  }
  printf("%d\n", j);
  return 0;
}
