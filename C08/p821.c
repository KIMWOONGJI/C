#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i=1;
  int j;

  while (1) {
    i++;
    if (i%2) {
      continue;
    }
    else if (i>9) {
      break;
    }

    j=0;
    while (1) {
      j++;
      if (j>i) {
        break;
      }
      printf("%d * %d = %d\n", i, j, i*j);
    }
  }

  return 0;
}
