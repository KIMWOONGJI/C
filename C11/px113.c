#include<stdio.h>

int main(int argc, char const *argv[]) {
  char apb[26];

  for(int i=0; i<26; i++) {
    apb[i]='A'+i;
  }

  for(int i=0; i<26; i++) {
    printf("%c", apb[i]);
  }
  printf("\n");

  return 0;
}
