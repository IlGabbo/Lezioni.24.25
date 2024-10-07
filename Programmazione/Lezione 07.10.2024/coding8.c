#include <stdio.h>
#define __CURRENT_YEAR__ 2024

int main() {
  int year;

  printf("Inserisci il tuo anno di nascita\n");
  scanf("%d", &year);

  int age = __CURRENT_YEAR__ - year;
  printf("Hai %d %s\n", age, age > 1 ? "anni" : "anno" );

  return 0;
}