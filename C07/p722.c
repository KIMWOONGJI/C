#include<stdio.h>

int main(int argc, char const *argv[]) {
  int i=0,
  j=0;

  while(i<5){
    while(j<i){
      printf("o");
      j++;
    }
    printf("*\n");
    i++;
    j=0;
  }
  return 0;
}
