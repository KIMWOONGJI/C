#include <stdio.h>

int main(int argc, char const *argv[]) {
  fputs("Output by fputs, ", stdout);
  fputs("I Love Linux.", stdout);

  fputs("\n", stdout);

  puts("Output by puts, ");
  puts("Ilove Linux.");

  return 0;
}
