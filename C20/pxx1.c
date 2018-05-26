#include<stdio.h>

int main(int argc, char const *argv[]) {
  int Arr[4][4]=
  {
    {1, 2,  3,  4},
    {5, 6,  7,  8},
    {9, 10, 11, 12},
    {13,14, 15, 16}
  };
  int ArrTemp[4][4]={};

  for (int k=0; k<4; k++)
  {
    for (int i=0; i<4; i++)
    {
      for (int j=0; j<4; j++)
      {
        ArrTemp[j][3-i]=Arr[i][j];
      }
    }

    for (int i=0; i<4; i++)
    {
      for (int j=0; j<4; j++)
      {
        Arr[i][j]=ArrTemp[i][j];
      }
    }

    for (int i=0; i<4; i++)
    {
      for (int j=0; j<4; j++)
      {
        printf("%2d ", Arr[i][j]);
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
