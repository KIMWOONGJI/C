#include<stdio.h>

#define MAX 5

int main(int argc, char const *argv[]) {
  int arr[MAX]={1, 2, 3, 4, 5};
  int temp;
  int *p=arr;

  for(int i=0; i<MAX/2; i++){
    temp=*(p+i);
    *(p+i)=*(p+(MAX-1-i));
    *(p+(MAX-1-i))=temp;
  }

  for(int i=0; i<MAX; i++){
    printf("%d ", *(p+i));
  }
  printf("\n");

  return 0;
}
