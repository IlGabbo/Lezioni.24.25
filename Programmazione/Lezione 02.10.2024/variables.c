// a first program in C 
#include <stdio.h>  // da una direttiva al preprocessore

// function main begins program execution
int main(void)
{
  int integer1;  // gli interi in c occupano 2 bytes (16 bit)
  int integer2;
  int sum;

  char ch = 'L';  // scanf("%c", &ch);
  float fl = 1.1;  // 4 bytes (32 bit), scanf("%f", &fl);
  
  printf("Enter first integer\n");
  scanf("%d", &integer1);  /* '%d' (direttiva) indica il tipo di variabile (intero con 'd'), 
              '&' indirizzo di memoria a causa della necessità di modificare il valore contenuto nell'indirizzo */
  
  printf("Enter second integer\n");
  scanf("%d", &integer2);
  
  sum = integer1 + integer2;
  
  printf("Sum is %d\n", sum);

  return 0;  // indicate that program ended successfully
}  // end function main
