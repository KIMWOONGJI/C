#include<stdio.h>

int max(int, int, int);
int min(int, int, int);

int main(int argc, char const *argv[]) {
  int v1, v2, v3;

  printf("Input 3 integers: ");
  scanf("%d %d %d", &v1, &v2, &v3);

  printf("Maximum: %d\n", max(v1, v2, v3));
  printf("Minimum: %d\n", min(v1, v2, v3));
  return 0;
}

int max(int a1, int a2, int a3) {
  int temp=a1>a2?a1:a2;
  return a3>temp?a3:temp;
}

int min(int a1, int a2, int a3) {
  int temp=a1<a2?a1:a2;
  return a3<temp?a3:temp;
}
