#include <stdio.h>

int main(int argc, char const *argv[]) {
  int s_kor, s_eng, s_mat;
  double avg;

  printf("Input the score of kor: ");
  scanf("%d", &s_kor);
  printf("Input the score of eng: ");
  scanf("%d", &s_eng);
  printf("Input the score of mat: ");
  scanf("%d", &s_mat);

  avg=(s_kor+s_eng+s_mat)/3;

  if (avg>=90) {
    printf("A\n");
  } else if (avg>=80) {
    printf("B\n");
  } else if (avg>=70) {
    printf("C\n");
  } else if (avg>=50) {
    printf("D\n");
  } else {
    printf("F\n");
  }

  return 0;
}
