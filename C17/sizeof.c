#include<stdio.h>

int main(int argc, char const *argv[]) {
  int a;
  int *pa=&a;
  int **ppa=&pa;

  printf("%lu %d\n", sizeof(a),   a);
  printf("%lu %p\n", sizeof(pa),  pa);
  printf("%lu %p\n", sizeof(ppa), ppa);
  return 0;
}
