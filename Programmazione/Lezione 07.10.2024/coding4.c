#include <stdio.h>

int main() {
  float temp;

  printf("Inserisci i gradi Celsius: ");
  scanf("%f", &temp);

  printf("Conversione in Fahrenheit: %.2fF\n", (temp * 9 / 5) + 32);

  return 0;
}
