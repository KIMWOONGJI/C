#include<stdio.h>

int pow2(int);

int main(int argc, char* argv[]) {
  int n, k=0;

  printf("Input a positive interger less than %d: ", pow2(8*sizeof(n)-1)-1);
  scanf("%d", &n);

  while(pow2(k)>0 && pow2(k)<=n) {
    printf("%2d = %d\n", k, pow2(k));
    k++;
  }

  printf(" k = %d\n", --k);
}

int pow2(int n) {
  if (n<=8*sizeof(n)-1)
    return n?2*pow2(n-1):1;
  else
    return -1;
}
