#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  srand(time(0));
  int choice = 0;
  int randomNumber = rand() % 10 + 1;

  // richiedo all'utente di inserire un numero tra 1 e 10
  printf("Indovina un numero tra 1 e 10: ");
  scanf("%d", &choice);

  /**
   * Se il numero è uguale al random l'utente ha vinto
   */
  if (choice == randomNumber) {
    printf("Hai vinto\n");
  } else {
    /**
     * L'utente ha sbagliato, quindi devo informare l'utente se il numero è
     * troppo alto o troppo basso
     */
    if (randomNumber < choice) {
      printf("Il numero inserito è troppo alto\n");
    } else {
      printf("Il numero inserito è troppo basso\n");
    }
    /**
     * Richiedo il numero all'utente nel secondo tentativo
     */
    printf("Indovina un numero tra 1 e 10: ");
    scanf("%d", &choice);

    /**
     * Se il numero è uguale al random l'utente ha vinto
     */
    if (choice == randomNumber) {
      printf("Hai vinto\n");
    } else {
      /**
       * L'utente ha sbagliato, quindi devo informare l'utente se il numero è
       * troppo alto o troppo basso
       */
      if (randomNumber < choice) {
        printf("Il numero inserito è troppo alto\n");
      } else {
        printf("Il numero inserito è troppo basso\n");
      }
      /**
       * Richiedo il numero all' utente nel terzo
       * e ultimo tentativo
       */
      printf("Indovina un numero tra 1 e 10: ");
      scanf("%d", &choice);

      /**
       * Se il numero è uguale al random l'utente ha vinto
       * Se l'utente perde lo si avvisa di aver finito i tentativi
       */
      if (choice == randomNumber) {
        printf("Hai vinto\n");
      } else {
        printf("Fine tentativi, il numero era %d\n", randomNumber);
      }
    }
  }

  return 0;
}

void _useless() {
  srand(time(0));

  int choice;
  int randomNumber = rand() % (10 - 0 + 1);

  for (int i = 3; i > 0; i--) {
    printf("Indovina un numero tra 1 e 10: ");
    scanf("%d", &choice);

    int status = choice == randomNumber;

    printf("Hai %s\n", status == 1 ? "vinto" : "perso, ritenta ");
    printf("(tentativi: %d)\n", i-1);

    if (status) {
      break;
    }
  }
}