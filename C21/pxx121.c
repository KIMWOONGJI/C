#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[]) {
  char Str[100]="";
  char Ch;

  int Sum=0;
  int i=0;

  puts("Input a string including a number: ");
  fgets(Str, sizeof(Str), stdin);

  while (*(Str+i)!='\0') {
    strncpy(&Ch, Str+i, 1);
    Sum+=atoi(&Ch);
    i++;
  }

  printf("%d\n", Sum);
  return 0;
}
