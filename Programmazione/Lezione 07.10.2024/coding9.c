#include <stdio.h>

int main() {
  float distance, time;

  printf("Inserisci la distanza (km): ");
  scanf("%f", &distance);
  printf("Inserisci il tempo (ore): ");
  scanf("%f", &time);

  printf("Velocità media: %.2fkm/h\n", distance / time);

  return 0;
}