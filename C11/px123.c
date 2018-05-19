#include<stdio.h>

int main(int argc, char const *argv[]) {
  char str[256];
  char sgasc=0;
  int i=0;

  printf("Input a string: \n");
  scanf("%s", str);

  while (str[i]!=0) {
    sgasc=sgasc>str[i]?sgasc:str[i];
    i++;
  }

  printf("The greatest ASCII on the string is : %c.\n", sgasc);

  return 0;
}
