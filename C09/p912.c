#include<stdio.h>

double ctof(double);
double ftoc(double);

int main(int argc, char const *argv[]) {
  int sel;
  double temp;

  printf("ctof(1), ftoc(2): ");
  scanf("%d", &sel);

  switch(sel){
    case 1:
      printf("Input the temperature in Celcius: ");
      scanf("%lf", &temp);
      printf("Temperature in Fahrenheit: %f\n", ctof(temp));
      break;

    case 2:
      printf("Input the temperature in Farenheit: ");
      scanf("%lf", &temp);
      printf("Temperature in Celcius: %f\n", ftoc(temp));
      break;

    default:
      printf("Wrong input!\n");
  }

  return 0;
}

double ctof(double c) {
  return 1.8*c+32;
}

double ftoc(double f) {
  return (f-32)/1.8;
}
