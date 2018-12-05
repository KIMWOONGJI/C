#include<stdio.h>

struct perInfo {
  char addr[30];
  char tel[20];
};

/*
struct person {
  char name[20];
  char pID[20];
  struct perInfo *info;
};

int main(int argc, char const *argv[]) {
  struct perInfo info={"Korea, Seoul", "333-4444"};
  struct person man={"Mr. Lee", "123415-1235123"};
  man.info=&info;

  printf("name: %s\n", man.name);
  printf("pID : %s\n", man.pID);
  printf("addr: %s\n", man.info->addr);
  printf("tel : %s\n", man.info->tel);
  printf("addr: %s\n", (*man.info).addr);
  printf("tel : %s\n", (*man.info).tel);

  return 0;
}
*/
struct person {
  char name[20];
  char pID[20];
  struct perInfo info;
};

int main(int argc, char const *argv[]) {
  struct perInfo info={"Korea, Seoul", "333-4444"};
  struct person man={"Mr. Lee", "123415-1235123"};
  man.info=info;

  printf("name: %s\n", man.name);
  printf("pID : %s\n", man.pID);
  printf("addr: %s\n", man.info.addr);
  printf("tel : %s\n", man.info.tel);

  return 0;
}
