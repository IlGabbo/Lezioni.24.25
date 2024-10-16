#include <stdio.h>

int main() {
  int i = 0;
  int sum = 0;

  while (i < 50) {
    if (i % 4 == 0) {
      sum = sum + i;
    }
    i++;
  }

  printf("%d\n", sum);

  return 0;
}