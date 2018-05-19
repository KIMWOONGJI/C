#include<stdio.h>

void sortarray(int *parr, int narr);

int main(int argc, char const *argv[]) {
  int arr[10];

  printf("Input 10 numbers\n");

  for (int i = 0; i < 10; i++) {
    printf("?: ");
    scanf("%d",&arr[i]);
  }

  sortarray(arr, 10);

  printf("Ouput of array elements:");
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

void sortarray(int *parr, int narr) {
  int iodd=0;
  int ieven=narr-1;
  int arr[narr];

  for (int i = 0; i < narr; i++) {
    if (*(parr+i)%2) {
      arr[iodd]=*(parr+i);
      iodd++;
    } else {
      arr[ieven]=*(parr+i);
      ieven--;
    }
  }
  for (int i = 0; i < 10; i++) {
    *(parr+i)=arr[i];
  }
}
