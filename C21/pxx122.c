#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void SortString(char (*Str)[100]);

int main(int argc, char const *argv[]) {
  char Str[3][100];

  printf("Input three strings:\n");
  scanf("%s %s %s", *(Str), *(Str+1), *(Str+2));

  SortString(Str);

  strncat(*(Str+2), *(Str+1), strlen(*(Str+1)));
  strncat(*(Str+2), *(Str+0), strlen(*(Str+0)));

  puts(*(Str+2));

  return 0;
}

void SortString(char (*Str)[100]) {
  char StrTemp[100]={};

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2-i; j++) {
      if (strcmp(*(Str+j), *(Str+j+1))>0) {
        strcpy(StrTemp,     *(Str+j));
        strcpy(*(Str+j),    *(Str+j+1));
        strcpy(*(Str+j+1),  StrTemp);
      }
    }
  }
}
