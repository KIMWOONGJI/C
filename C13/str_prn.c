#include<stdio.h>

int main(int argc, char const *argv[]) {
  char str1[5]="abcd";
  char* str2="ABCD";
  char* str3="ABCD";

  printf("%s \n", str1);
  printf("%s \n", str2);

  str1[0]='x';
  //str2[0]='X';

  printf("%s \n", str1);
  printf("%s \n", str2);

  printf("%X \n", str1);
  printf("%X \n", str2);
  printf("%X \n", str3);


  return 0;
}
