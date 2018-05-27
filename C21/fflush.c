#include<stdio.h>

int main(int argc, char const *argv[]) {
  char perID[7];
  char name[10];

  fputs("Input your personal ID number in the first 6 digits: ", stdout);
  fgets(perID, sizeof(perID), stdin);

  fflush(stdin);
  // C Standard에서는 표준출력스트림(stdout)만을 지원하는 함수임.
  // MS에서는 사용이 가능하나, 표준입력스트림(stdin)을 플러싱하는 것은 표준이 아님.

  fputs("Input your name: ", stdout);
  fgets(name, sizeof(name), stdin);

  printf("Your personal ID number in the first 6 digits: %s\n", perID);
  printf("Your name: %s\n", name);

  return 0;
}
