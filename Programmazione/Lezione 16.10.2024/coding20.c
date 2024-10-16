#include <stdio.h>

int main() {
  int sum = 0;
  int i = 1;
  while (i <= 5) {
    sum += i;
    i++;
  }
  printf("%d\n", sum);
  return 0;
}