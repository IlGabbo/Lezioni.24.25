#include <stdio.h>

int main() {
  float price;
  int amount;

  printf("Inserisci il prezzo di un prodotto: ");
  scanf("%f", &price);
  printf("Inserisci la quantità di prodotti: ");
  scanf("%d", &amount);

  printf("Totale spesa: €%.2f\n", price * amount);

  return 0;
}
