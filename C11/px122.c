#include<stdio.h>

int main(int argc, char* argv[]) {
  char str[256], c;
  int slen=0;

  printf("Input a string:\n");
  scanf("%s", str);

  while(str[slen]!=0) {
    slen++;
  }

  printf("slen: %d.\n", slen);

  for(int i=0; i<slen/2; i++) {
    c=str[i];
    str[i]=str[slen-1-i];
    str[slen-1-i]=c;
  }

  printf("%s\n", str);

  return 0;
}
