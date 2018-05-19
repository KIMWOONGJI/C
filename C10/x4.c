#include<stdio.h>

int main(int argc, char const *argv[]) {
  for (int i = 1; i <= (35-7-4)/5; i++) {
    for (int j = 1; j <= (35-5*i)/7; j++) {
      for (int k = 1; k <= (35-5*i-7*j)/4; k++) {
        if (35-5*i-7*j-4*k==0) {
          printf("%d %d %d\n", i, j, k);
        }
      }
    }
  }
  return 0;
}
