/*
    Scrivete singole istruzioni in C per effettuare ciascuna
    delle seguenti azioni:

    a) Moltiplicare la variabile product per 2 usando l'operatore *=
*/

#include <stdio.h>

int main(void) {
    int product = 2;

    printf("%d\n", product);
    product *=2;
    printf("%d\n", product);

    /*
        b) Moltiplicate a variabile product per 2 usando gli operatori = e *
    */

   product = product * 2;
   printf("%d\n", product);

   /*
        c) Verificate se il valore della variabile count è maggiore di 10. Se lo è,
           stampate "Count is greater than 10"
   */

  int count = 20;

  if(count > 10) {
      puts("Count is grater than 10");
  }

  /*
        d) Calcolate il resto della divisione di q per divisore e assegnate il risultato
            a q. Scrivete questa istruzione in due modi differenti.
  */

    int q = 3;
    int divisore = 2;

    q %= divisore;
    printf("%d \n", q);
    q = q % divisore;
    printf("%d \n", q);

    /*
        e) Stampate il valore 123.4567 con due cifre di precisione. Quale valore viene stampato?
    */

   double valore = 123.4567;

   printf("%.2lf \n", valore);

   /*
        f)  Stampate il valore del numero in virgola mobile 3.14159 con tre cifre alla destra
            del numero decimale. Quale valore viene stampato?
   */

  double valore2 = 3.14159;

  printf("%.3lf", valore2);
}