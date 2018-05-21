#include<stdio.h>

#define MAX 7

void BubSortAsc(int *parr);
void BubSortDes(int *parr);
void SwapInt(int *pa, int *pb);

int main(int argc, char const *argv[]) {
  int Arr[MAX];

  for (int i = 0; i < MAX; i++) {
    printf("?: ");
    scanf("%d", &Arr[i]);
  }

  BubSortAsc(Arr);

  printf("Asceding Bubble Sort\n");
  for (int i = 0; i < MAX; i++) {
    printf("%d ", Arr[i]);
  }
  printf("\n");

  BubSortDes(Arr);

  printf("Deceding Bubble Sort\n");
  for (int i = 0; i < MAX; i++) {
    printf("%d ", Arr[i]);
  }
  printf("\n");

  return 0;
}

void BubSortAsc(int *parr) {
  for (int i = 0; i < MAX-1; i++) {
    for (int j = 0; j < MAX-1-i; j++) {
      if (*(parr+j) > *(parr+j+1)) {
        SwapInt(parr+j, parr+j+1);
      }
    }
  }
}

void BubSortDes(int *parr) {
  for (int i = MAX-1; i > 0 ; i--) {
    for (int j = MAX-1; j > MAX-1-i; j--) {
      if (*(parr+j-1) < *(parr+j)) {
        SwapInt(parr+j-1, parr+j);
      }
    }
  }
}

void SwapInt(int *pa, int *pb) {
  int temp;
  temp  = *pa;
  *pa   = *pb;
  *pb   = temp;
}
