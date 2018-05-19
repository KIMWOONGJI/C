#include<stdio.h>

int main(int argc, char* argv[]){
  char str[256];
  int strl=0;

  printf("Inpput a string:\n");
  scanf("%s", str);

  while(str[strl]!='\0') {
    strl++;
  }

  printf("\n");
  for (int i = 0; i < strl; i++) {
    printf("%d", i%10);
  }
  printf("\n");

  printf("%s\n", str);
  printf("The length of string is %d.\n", strl-1);

  return 0;
}
