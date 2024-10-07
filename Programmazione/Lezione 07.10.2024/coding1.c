#include <stdio.h>

int main() {
  char name;
  char lastname;
  int year = 0;

  printf("Inserire l'iniziale del tuo nome e cognome\n");
  scanf("%c%c", &name, &lastname);  // fflush(stdin);
  printf("Inserire il tuo anno di nascita\n");
  scanf("%d", &year);  // fflush(stdin);

  printf("Benvenuto %c.%c., sei nato nell'anno %d\n", name, lastname, year);

  return 0;
}
