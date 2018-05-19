#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, fac=1;
  for (;;){
    printf("Input: ");
    scanf("%d", &n);

    for(int i=n;i>1;i--){
      fac*=i;
    }

    printf("%d! = %d\n", n, fac);
    fac=1;

  }
  return 0;
}
