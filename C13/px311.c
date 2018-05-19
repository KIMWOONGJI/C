#include<stdio.h>

int main(int argc, char const *argv[]) {
  int arr[5]={1, 2, 3, 4, 5};
  int *p=arr;

  for(int i=0;i<5;i++){
    *(p+i)+=2;
    printf("%d",*(p+i));
  }
  printf("\n");
  
  return 0;
}
