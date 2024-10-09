#include <stdio.h>

int main() {
  int num;
  printf("Inserisci un numero a caso: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("Il numero è pari\n");
  } else {
    printf("Il numero è dispari\n");
  }
}