/*
    Scrivete un'istruzione per eseguire ognuno dei seguenti compiti.
    a) Definire le variabili sum e x come tipo int.
    b) Ponete la variabile x a 1.
    c) Ponete la variabile sum a 0.
    d) Sommate la variabile x alla variabile sum e assegnate il risultato alla variabile sum.
    e) Stampate "The sum is: "seguito dal valore della variabile sum.
*/

#include <stdio.h>

int main(void) {
    int sum, x;

    x = 1;
    sum = 0;

    sum += x;

    printf("The sum is: %d \n", sum);

    /*
        Mettete insieme le istruzioni che avete scritto nel precedente esercizio in un programma
        che calcoli la somma dei numeri interi da 1 a 10. Usate l'istruzione while per iterare i
        calcoli e le istruzioni di incremento. Il ciclo deve terminare quando il valore di x diventa 11.
    */

   sum = 0;

   while(x <= 10) {
       sum += x;
       x++;
   }
   printf("%d", sum);
}
