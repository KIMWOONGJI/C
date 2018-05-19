#include <stdio.h>

int main(int argc, char const *argv[]) {
  for (int i = 1; i < 99; i++) {
    if (i%7==0 || i%9==0) {
      printf("%d\n", i);
    }
  }
  return 0;
}
