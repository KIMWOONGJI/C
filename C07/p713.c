#include<stdio.h>

int main(int argc, char * argv[]){
  int n=1, sum=0;

  while(n!=0){
    scanf("%d", &n);
    sum+=n;
  }

  printf("Result: %d\n",sum);
}
