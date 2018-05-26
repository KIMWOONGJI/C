#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int tryBaseball(int *pStrikeCount, int *pBallCount, int const *pNumberSet);

int main(int argc, char const *argv[]) {
  srand((unsigned int)time(NULL));
  int NumberSet[3];
  for (int i = 0; i < 3; i++) {
    NumberSet[i]=rand()%10;
  }

  int GameCount=1;
  int StrikeCount, BallCount;

  do {
    tryBaseball(&StrikeCount, &BallCount, NumberSet);
    printf("No. of Try: %d, Result: %d Strike, %d Ball !\n", GameCount++, StrikeCount, BallCount);
  } while (StrikeCount!=3);

  printf("Game Over !\n");

  return 0;
}

int tryBaseball(int *pStrikeCount, int *pBallCount, int const *pNumberSet) {
  *pStrikeCount=0;
  *pBallCount=0;

  int NumberInput[3];

  printf("Input three numbers:");
  scanf("%d %d %d", NumberInput, NumberInput+1, NumberInput+2);

  for (int i = 0; i < 3; i++) {
    if (pNumberSet[i]==NumberInput[i]) {
      (*pStrikeCount)++;
    } else{
      for (int j = 0; j < 3; j++) {
        if (pNumberSet[i]==NumberInput[j]) {
          (*pBallCount)++;
        }
      }
    }
  }
  return 0;
}
