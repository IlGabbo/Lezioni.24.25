#include <stdio.h>

int main() {
  float lunghezza, larghezza;

  printf("Inserisci la lunghezza: ");
  scanf("%f", &lunghezza);
  printf("Inserisci la larghezza: ");
  scanf("%f", &larghezza);

  printf("Area del %s: %.2f\n", lunghezza == larghezza ? "quadrato" : "rettangolo", lunghezza * larghezza);
}
