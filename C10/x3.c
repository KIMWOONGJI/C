#include<stdio.h>

int gcd(int, int);

int main(int argc, char const *argv[]) {
  int v1, v2;

  printf("Input 2 integers:");
  scanf("%d %d", &v1, &v2);

  printf("GCM: %d\n", gcd(v1, v2));
  return 0;
}

int gcd(int i, int j) {
  if (i==1 || j==1) {
    return 1;
  } else {
    for (int k = (i<j?i:j); k > 1; k--) {
      if (i%k==0 && j%k==0) {
        return k;
      }
    }
  }
  return 1;
}
