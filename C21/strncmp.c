#include<stdio.h>
#include<string.h>

char *str1="ABCDEFG";
char *str2="ABCdefg";

int main(int argc, char const *argv[]) {
  int result;

  result=strncmp(str1, str2, 4);

  if (result==0) {
    puts("Partially correspondancy in str1 and str2!");
  } else {
    puts("No correspondancy in str1 and str2!");
  }

  return 0;
}
