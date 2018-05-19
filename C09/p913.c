#include<stdio.h>

void fibo(int);

int main(int argc, char const *argv[]) {
  int n;

  printf("Input the number: ");
  scanf("%d", &n);

  fibo(n);

  return 0;
}

void fibo(int n) {
  int a=0, b=1;
  int temp;

  for (int i = 0; i < n; i++) {
    if(i<1) {
      printf("%d", a);
    }
    else if(i<2) {
      printf(", %d", b);
    }
    else {
      temp=a+b;
      printf(", %d", temp);
      a=b;
      b=temp;
    }
  }
  printf("\n");
}
