#include <stdio.h>

/*
int main(int argc, char const *argv[]) {
  int iter=0;

  for (int i = 0; i <= 9; i++) {
    for (int j = 0; j <= 9; j++) {
      iter++;
      if (i+j!=9) {
        continue;
      }
      printf("a: %d b: %d\n", i, j);
      if (i+j==9) {
        break;
      }
    }
  }

  printf("Number of iteration: %d\n", iter);

  return 0;
}
*/

int main(int argc, char const *argv[]) {
  int a, b;
  int result;
  int iter=0;

  for (a = 1; a < 10; a++) {
    for (b = 0; b < 10; b++) {
      iter++;
      if (a==b)
        continue;
      result=(a*10+b)+(b*10+a);
      if(result==99)
        printf("%d%d+%d%d=%d\n", a, b, a, b, result);
    }
  }

  printf("Number of iteration: %d\n", iter);

  return 0;
}
