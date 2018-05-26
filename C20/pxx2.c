#include<stdio.h>

int main(int argc, char const *argv[]) {
  int S[20][20]={};

  int s=1;
  int N=0;

  int i, j, k, l;
  int d=0;
  int m=0, n=0;

  printf("?: ");
  scanf("%d", &N);

  for (i=0; i<N-1; i++)
  {
    if (i==0 || i==(N-2))
    {
      k=3;
    }
    else
    {
      k=2;
    }
    for (j=0; j<k; j++)
    {
      for (l=0 ;l<(N-1-i); l++)
      {
        switch(d%4)
        {
          case 0:
            S[m][n++]=s++;
            break;
          case 1:
            S[m++][n]=s++;
            break;
          case 2:
            S[m][n--]=s++;
            break;
          case 3:
            S[m--][n]=s++;
            break;
        }
      }
      d++;
    }
  }

  for (m=0; m<N; m++)
  {
    for (n=0; n<N; n++)
    {
      printf("%2d ", S[m][n]);
    }
    printf("\n");
  }
  return 0;
}
