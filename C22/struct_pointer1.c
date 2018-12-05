#include <stdio.h>

struct person {
  char name[20];
  char phone[20];
};

int main(int argc, char const *argv[]) {
  struct person man={"Thomas", "354-1234"};
  struct person *pMan;
  pMan=&man;

  printf("name  : %s\n", man.name);
  printf("phone  : %s\n", man.phone);

  printf("name  : %s\n", (*pMan).name);
  printf("phone  : %s\n", (*pMan).phone);

  printf("name  : %s\n", pMan->name);
  printf("phone  : %s\n", pMan->phone);

  return 0;
}
