#include<stdio.h>

int main(int argc, char const *argv[]) {
  int x1, y1;
  int x2, y2;

  printf("Input the x, y coordinate of the first point  :");
  scanf("%d %d",&x1,&y1);

  printf("Input the x, y coordinate of the second point :");
  scanf("%d %d",&x2,&y2);

  printf("The Area  :%d\n", (x2-x1)*(y2-y1));

  return 0;
}
