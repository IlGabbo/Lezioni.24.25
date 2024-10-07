#include <stdio.h>
#define PI 3.14

int main() {
  float raggio = 0;

  printf("Inserisci il raggio di un cerchio: \n");
  scanf("%f", &raggio);

  printf("Perimetro: %.2f, Area: %.2f\n", raggio * (2 * PI), PI * (raggio * raggio));

  return 0;
}