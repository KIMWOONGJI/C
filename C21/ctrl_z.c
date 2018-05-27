#include<stdio.h>

int main(int argc, char const *argv[]) {
  char ch=0;

  while (ch != EOF) {
    ch=getchar();
    putchar(ch);
  }

  printf("Program is terminated!\n");

  return 0;
}
