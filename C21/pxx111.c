#include<stdio.h>

int main(int argc, char const *argv[]) {
  char ch=0;

  ch=getchar();
  if (ch >= 'A' && ch <= 'Z') {
    putchar(ch+32);
    putchar('\n');
  } else if (ch >= 'a' && ch <= 'z') {
    putchar(ch-32);
    putchar('\n');
  } else {
  printf("Wrong Input !\n");
  }
  return 0;
}
