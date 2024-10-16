#include <stdio.h>

/**
 * intero counter = 1
 * finché counter <= 10
 *    stampa counter
 *    counter++
 * fine
 */

int main() {
  int counter = 1;

  while (counter <= 10) {
    printf("Counter: %d\n", counter);
    counter++;
  }

  return 0;
}
