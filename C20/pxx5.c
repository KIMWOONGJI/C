#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int tryRSP(int *pUwin, int *pUdraw);
char *printRSP(int rsp);

int main(int argc, char const *argv[]) {
  srand((unsigned int)time(NULL));
  int Uwin=0, Udraw=0;

  while (tryRSP(&Uwin, &Udraw)!=2) {
  }

  printf("Result: %d Win, %d Draw\n", Uwin, Udraw);

  return 0;
}

int tryRSP(int *pUwin, int *pUdraw) {
  int Ursp, Crsp=rand()%3+1;
  int Det;

  printf("Rock(1), Scissor(2), Paper(3): ");
  scanf("%d", &Ursp);

  Det=Crsp-Ursp;

  printf("Yours: %s, ", printRSP(Ursp));
  printf("Computers: %s, ", printRSP(Crsp));

  if (Det==1 || Det==-2) {
    printf("You Win!\n");
    (*pUwin)++;
    return 1;
  } else if (Det==0){
    printf("Draw.\n");
    (*pUdraw)++;
    return 0;
  }
  printf("You Lose.\n");
  return 2;
}

char *printRSP(int rsp) {
  switch(rsp) {
    case 1:
      return "Rock";
    case 2:
      return "Scissor";
    case 3:
      return "Paper";
  }
  return 0;
}
