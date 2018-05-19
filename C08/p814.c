#include <stdio.h>

int main(int argc, char const *argv[]) {
  int v1, v2;

  printf("Input two numbers:");
  scanf("%d %d", &v1, &v2);
/*
  if (v1>=v2) {
    printf("%d\n", v1-v2);
  } else {
    printf("%d\n", v2-v1);
  }
*/
  v1>=v2 ? printf("%d\n", v1-v2) : printf("%d\n", v2-v1);

  return 0;
}
