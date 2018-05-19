#include<stdio.h>

void prn_odd(const int *parr);
void prn_even(const int *parr);

int main(int argc, char const *argv[]) {
  int arr[10];

  for (int i = 0; i < 10; i++) {
    printf("?: ");
    scanf("%d", &arr[i]);
  }

  prn_odd(arr);
  prn_even(arr);

  return 0;
}

void prn_odd(const int *parr) {
  printf("Odd number is/are: ");
  for (int i = 0; i < 10; i++) {
    if (*(parr+i)%2==1) {
      printf("%d, ", *(parr+i));
    }
  }
  printf("\n");
}

void prn_even(const int *parr) {
  printf("Even number is/are: ");
  for (int i = 0; i < 10; i++) {
    if (*(parr+i)%2==0) {
      printf("%d, ", *(parr+i));
    }
  }
  printf("\n");
}
