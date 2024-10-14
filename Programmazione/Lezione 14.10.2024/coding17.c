#include <stdio.h>

int main() {
  float price;

  printf("Inserisci il prezzo di un prodotto: ");
  scanf("%f", &price);

  price = price > 100 ? price * 0.9 : price;

  printf("Il prezzo %sè: €%.2f\n", price > 100 ? "scontato " : "", price);

  return 0;
}