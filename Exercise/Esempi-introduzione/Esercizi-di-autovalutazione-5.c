    /*
      Scrivere un programma in C che usi le istruzioni dell'esercizio precedente per calcolare
      z eleveto alla potenza k. Il programma dovrà avere un'istruzione di controllo dell'iterazione
      while.
    */

#include <stdio.h>

int main(void) {

   unsigned int z;
   unsigned int k;

   puts("Inserisci un intero z:");
   scanf("%u", &z);
   puts("Inserisci un intero k");
   scanf("%u", &k);

   unsigned int j = 1;

   while(j < k) {
      z *= z;
      j++; 
   }

   printf("z elevato alla k: %u \n", z);
}