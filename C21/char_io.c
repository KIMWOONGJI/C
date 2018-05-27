#include<stdio.h>

int main(int argc, char const *argv[]) {
  char ch=0;

  while (ch != 'q') {
    ch=getchar();
    putchar(ch);
  }
  return 0;
}
