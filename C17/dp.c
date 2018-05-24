#include<stdio.h>

void fA(int *pA);
void fB(int **pB);

void fc(int **pc);

int main(int argc, char const *argv[]) {
  int A[5]={};
  for (int i = 0; i < 5; i++) {
    printf("A[%d]: %d\n", i, A[i]);
  }
  fA(A);
  for (int i = 0; i < 5; i++) {
    printf("A[%d]: %d\n", i, A[i]);
  }

  int B[5]={};
  int *pB[5]={B,B,B,B,B};
  for (int i = 0; i < 5; i++) {
    printf("*B[%d]: %d\n", i, *pB[i]);
  }
  fB(pB);
  for (int i = 0; i < 5; i++) {
    printf("*B[%d]: %d\n", i, *pB[i]);
  }

  int c=0;
  int *pc=&c;
  printf("*c: %d\n", *pc);
  fc(&pc);
  printf("*c: %d\n", *pc);

  return 0;
}

void fA(int *pA) {
  *(pA+2)=1;
}

void fB(int **pB) {
  *(*(pB+4)+0)=1;
}

void fc(int **pc) {
  **pc=1;
}
