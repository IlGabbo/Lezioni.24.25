#include <stdio.h>

int main() {
  int int1, int2;

  printf("Inserisci un numero intero: ");
  scanf("%d", &int1);
  printf("Inserisci un altro numero intero: ");
  scanf("%d", &int2);

  if (int1 == int2) {
    printf("I due numeri sono uguali\n");
  } else {
    printf("Il numero maggiore è %d\n", int1 > int2 ? int1 : int2);
  }
}