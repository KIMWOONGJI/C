#include<stdio.h>

void MaxMin(int pArr[], int **pmax, int **pmin);

int main(int argc, char const *argv[]) {
  int Arr[5];
  int *max;
  int *min;

  for (int i = 0; i < 5; i++) {
    printf("?: ");
    scanf("%d", &Arr[i]);
  }

  MaxMin(Arr, &max, &min);

  for (int i = 0; i < 5; i++) {
    printf("memory address of Arr[%d]: %p, value: %d \n", i, &Arr[i], Arr[i]);
  }
  printf("memory address of max   : %p, value: %d \n", max, *max);
  printf("memory address of min   : %p, value: %d \n", min, *min);

  return 0;
}

void MaxMin(int pArr[], int **pmax, int **pmin) {
  *pmax=pArr;
  *pmin=pArr;

  for (int i = 1; i < 5; i++) {
    if (**pmax < pArr[i]) {
      *pmax=pArr+i;
    } else if (**pmin > pArr[i]) {
      *pmin=pArr+i;
    }
  }
}
