#include<stdio.h>

int main(int argc, char* argv[]) {
  int n, maxn=1, i=1, k=0, k2=1;

  while(i<8*sizeof(n)) {
    maxn*=2;
    i++;
  }
  maxn--;

  printf("Input a positive interger less than %d: ", maxn);
  scanf("%d", &n);

  while (k2<=n) {
    k2*=2;
    k++;
  }

  printf("%d\n", k-1);
}
