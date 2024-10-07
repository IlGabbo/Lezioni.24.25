#include <stdio.h>

int main() {
  float b, h;

  printf("-------------------------------------------\n");
  printf("Area\n");
  printf("-------------------------------------------\n");
  printf("Inserisci la base: \n");
  scanf("%f", &b);
  printf("Inserisci l'altezza: \n");
  scanf("%f", &h);

  printf("L'area è: %.2f\n", b*h);

  return 0;
}