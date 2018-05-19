/* circle_area.c */

#include "stdio.h"

int main(int argc, char const *argv[]) {
  double radius;
  double area;

  printf("Input the radius of circle:\n");
  scanf("%lf\n", &radius);

  area=radius*radius*3.1415;

  printf("The area of circle:%f\n", area);

  return 0;
}
