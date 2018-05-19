#include<stdio.h>

int main(int argc, char * argv[]){
  int i=0;
  int n;

  printf("Input a number: ");
  scanf("%d", &n);

  while(i<9){
    printf("%d * %d = %d\n", n, (9-i), n*(9-i));
    i++;
  }
}
