#include<stdio.h>

int main(int argc, char * argv[]){
  int i=0;
  int n;

  printf("Input a number:");
  scanf("%d", &n);

  while(i<n){
    printf("%d\n", 3*++i);
  }
}
