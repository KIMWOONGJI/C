#include<stdio.h>

int main(int argc, char * const argv[]){
  int val;

  printf("Input:");
  scanf("%d", &val);

  if(val<0)
    printf("Result:%d\n",~val+1);

  return 0;
}
