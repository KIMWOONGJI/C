#include<stdio.h>

int main(int argc, char const *argv[]) {
  int Grade[5][5]={
    {8, 9,  6,  5},
    {6, 8,  12, 9},
    {8, 5,  6,  9},
    {8, 10, 7,  10},
    {}
  };

  char *Name[]={
    "P1", "P2", "P3", "P4", "PT"
  };

  char *Sub[]={
    "S1", "S2", "S3", "S4", "ST"
  };

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      Grade[i][4]+=Grade[i][j];
      Grade[4][i]+=Grade[j][i];
    }
  }

  printf("   ");
  for (int i = 0; i < 5; i++) {
    printf("%s ", Sub[i]);
  }
  printf("\n");
  for (int i = 0; i < 5; i++) {
    printf("%s ", Name[i]);
    for (int j = 0; j < 5; j++) {
      printf("%2d ", Grade[i][j]);
    }
    printf("\n");
  }

  return 0;
}
