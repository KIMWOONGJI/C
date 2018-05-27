#include<stdio.h>

int main(int argc, char const *argv[]) {
  char str[10];

  fputs("Input a string: ", stdout);
  fgets(str, sizeof(str), stdin);

  fputs("The string: ", stdout);
  fputs(str, stdout);
  
  return 0;
}
