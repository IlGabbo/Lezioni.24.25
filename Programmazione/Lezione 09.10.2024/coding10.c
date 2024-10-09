#include <stdio.h>

int main() {
  int age;
  printf("Inserisci la tua età: \n");
  scanf("%d", &age);

  if (age >= 18) {
    printf("Sei maggiorenne\n");
  } else {
    printf("Sei minorenne\n");
  }
}