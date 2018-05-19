#include<stdio.h>

int main(int argc, char const *argv[]) {
  int total=0;
  int val=0;

/*
  while(val!=0){
    printf("Inupt a number(0 to quit): ");
    scanf("%d", &val);
    total+=val;
  }
*/
  printf("Inupt a number(0 to quit): ");
  scanf("%d", &val);
  total+=val;

  while(val!=0){
    printf("Inupt a number(0 to quit): ");
    scanf("%d", &val);
    total+=val;
  }

  printf("Total: %d\n", total);

  return 0;
}
