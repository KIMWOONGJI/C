#include <stdio.h>

int main(int argc, char const *argv[]) {
  char c;

  printf("Input the number of ASCII:\n");
  scanf("%d\n", &c);

  if(c>=0 && c<128)
    printf("%d is %c\n",c,c);
  else
    printf("Out of range\n");

  return 0;
}
