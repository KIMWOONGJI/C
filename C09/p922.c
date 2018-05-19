#include<stdio.h>

int deposit(int);

int main(int argc, char const *argv[]) {
  int money;

  while (1) {
    printf("Deposit: ");
    scanf("%d", &money);

    if(money==-1) {
      printf("Deposit complete!\n");
      break;
    }
    else {
      printf("Total deposit: %d\n", deposit(money));
    }
  }
  return 0;
}

int deposit(int money) {
  static int total=0;
  total+=money;
  return total;
}
