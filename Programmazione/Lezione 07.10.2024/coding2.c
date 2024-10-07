#include <stdio.h>

int main() {
  int a1, a2, a3;

  printf("Inserisci il primo numero:\n");
  scanf("%d", &a1);
  fflush(stdin);
  printf("Inserisci il secondo numero:\n");
  scanf("%d", &a2);
  fflush(stdin);
  printf("Inserisci il terzo numero:\n");
  scanf("%d", &a3);
  fflush(stdin);

  printf("La somme è: %d\n", a1+a2+a3);

  return 0;
}
