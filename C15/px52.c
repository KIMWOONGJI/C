#include<stdio.h>
#include<stdbool.h>

void dtob(bool *pnb, const int *pnd);

int main(int argc, char const *argv[]) {
  int nd;
  bool nb[8*sizeof(nd)];

  printf("Input a decial number:");
  scanf("%d", &nd);

  dtob(nb, &nd);

  for (int i=0; i<8*sizeof(nd); i++) {
    printf("%d", nb[i]);
    if (((i+1)%8)==0) {
      printf(" ");
    }
  }
  printf("\n");

  return 0;
}

void dtob(bool *pnb, const int *pnd) {
  for (int i=0; i<8*sizeof(*pnd); i++) {
    if (*pnd&(1<<i)) {
      *(pnb+8*sizeof(*pnd)-1-i)=true;
    } else {
      *(pnb+8*sizeof(*pnd)-1-i)=false;
    }
  }
}
