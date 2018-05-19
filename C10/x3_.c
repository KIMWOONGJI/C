#include<stdio.h>

int gcd(int, int);

int main(int argc, char const *argv[]) {
  int v1, v2, temp;

  printf("Input 2 integers:");
  scanf("%d %d", &v1, &v2);

  v1>v2?:(temp=v1, v1=v2, v2=temp);

  printf("GCM: %d\n", gcd(v1, v2));

  return 0;
}

int gcd(int a, int b) {
  return a%b?gcd(b,a%b):b;
}
