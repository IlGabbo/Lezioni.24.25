#include <stdio.h>

int main() {
  float vote1, vote2, vote3, vote4;
  float votes[4];
  float sum = 0;

  for (int i = 0; i < 4; i++) {
    printf("Inserisci il %do voto\n", i + 1);
    scanf("%f", &votes[i]);
    sum += votes[i];
  }

  printf("Media: %.2f\n", sum / 4);

  return 0;
}