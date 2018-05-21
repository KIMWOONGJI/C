#include<stdio.h>

#define MAX 256

int getStringLength(const char *pStr);
int detStringPalindrome(const char *pStr);

int main(int argc, char const *argv[]) {
  char Str[MAX];

  printf("Input a string: ");
  scanf("%s", Str);

  if (detStringPalindrome(Str)) {
    printf("It is a palindrome!\n");
  } else {
    printf("It is NOT a palindrome!\n");
  }
  return 0;
}

int getStringLength(const char *pStr) {
  for (int i = 0; i < MAX; i++) {
    if(*(pStr+i)==0) {
      return i;
    }
  }
  return -1;
}

int detStringPalindrome(const char *pStr) {
  int l=getStringLength(pStr);

  for (int i = 0; i < l/2; i++) {
    if (*(pStr+i)!=*(pStr+l-1-i)) {
      return 0;
    }
  }
  return 1;
}
