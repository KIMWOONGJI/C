#include<stdio.h>

int main(int argc, char* argv[]) {
  char str[40]="";//Hello World!";
  /*
  str[12]='2';
  str[13]='5';

  str[39]='1';
  */
  for (int i = 0; i < 20; i++) {
    printf("%d", i%10);
  }
  printf("\n");

  for (int i = 0; i < 20; i++) {
    str[i]='a'+i;
  }

  printf("%s\n", str);
}
