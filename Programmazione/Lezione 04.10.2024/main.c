#include <stdio.h>

int sum(int _a1, int _a2) {
  return _a1 + _a2;
}

int mul(int _a1, int _a2, int _a3) {
  return _a1 * _a2 * _a3;
}

int main() {
  int intero1 = 0;
  int intero2 = 0;
  int intero3 = 0;

  char aa[9] = "ciao";

  printf("Addizione\n");
  printf("Inserisci il primo numero intero: ");
  scanf("%d", &intero1);
  printf("Inserisci il secondo numero intero: ");
  scanf("%d", &intero2);

  printf("La somma dei due numeri è: %d\n", sum(intero1, intero2));

  // Resetto i valori
  intero1 = 0;
  intero2 = 0;

  printf("Moltiplicazione\n");
  printf("Inserisci il primo numero intero: ");
  scanf("%d", &intero1);
  printf("Inserisci il secondo numero intero: ");
  scanf("%d", &intero2);
  printf("Inserisci il terzo numero intero: ");
  scanf("%d", &intero3);

  int ml = mul(intero1, intero2, intero3);
  printf("Il prodotto dei tre numeri è: %d\n", ml);

  return 0;
}
