#include<stdio.h>

int n;

int multiply(int, int);

int main(int argc, char const *argv[]) {
  int v1, v2;

  while(1){
    printf("Input 2 integers: ");
    scanf("%d %d", &v1, &v2);

    if(v1==0 && v2==0){
      printf("Quit!\nCalculated for total %d times\n", n);
      break;
    }
    else {
      printf("Result: %d\n", multiply(v1, v2));
      n++;
    }
  }

  return 0;
}

int multiply(int a, int b) {
  return a*b;
}
