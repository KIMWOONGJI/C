#include<stdio.h>

int add(int, int);
int input(void);
void resultprint(int);
void intro(void);

int main(int argc, char const *argv[]) {
  intro();
  resultprint(add(input(),input()));
  return 0;
}

int add(int i, int j) {
  return i+j;
}

int input(void) {
  int input;
  scanf("%d", &input);
  return input;
}

void resultprint(int val) {
  printf("result of addition: %d\n", val);;
  printf("*****  end  *****\n");
}

void intro(void) {
  printf("***** start ******\n");
  printf("input two integers: ");
}
