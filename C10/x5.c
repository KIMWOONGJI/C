#include<stdio.h>

int pn(int);

int main(int argc, char const *argv[]) {
  int tn=2, n=0;

  while(n<10) {
    if(pn(tn)) {
      printf("%d ", tn);
      n++;
    }
    tn++;
  }
  printf("\n");

  return 0;
}

int pn(int n) {
  int i=2;

  while(n%i) {
    i++;
  }

  return n==i?n:0;
}
