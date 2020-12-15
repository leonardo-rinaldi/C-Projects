/*
    Scrivete un'istruzione o un insieme di istruzioni per eseguire ognuno 
    dei seguenti compiti.
    a) Sommate i numeri interi dispari tra 1 e 99 usando un'istruzione for. 
       Utilizzate variabili intere sum e count senza segno.
    b) Stampate il valore 333.546372 con un'ampiezza di campo di 15 caratteri
       con precisioni di 1, 2, 3, 4 e 5. Allineate a sinistra l'output.
    c) Calcolate il valoredi 2.5 elevato alla potenza di 3 usando la funzione pow.
       Stampate il risultato con una precisione di 2 con una lunghezza di campo di
       10 posizioni.
    d) Stampate gli interi da 1 a 20 usando un ciclo while e la variabile contatore x.
       Stampate soltanto cinque interi per riga.
    e) Ripetere l'esercizio precedente usando un'istruzione for.
*/

#include <stdio.h>
#include <math.h>

int main(void) {

    //a)
    int sum;

    for(unsigned int count = 1; count <= 99; count += 2) {
        sum += count;
    }
    printf("%d \n", sum);

    //b)
    double z = 333.546372;

    printf("%-15.1lf \n", z);   //il - all'inea a sinistra
    printf("%-15.2lf \n", z);
    printf("%-15.3lf \n", z);
    printf("%-15.4lf \n", z);
    printf("%-15.5lf \n", z);

    //c)
    double y;

    y = pow(2.5, 3);
    printf("%10.2lf \n", y);

    //d)
    int x = 1;

    while(x <= 20) {
        if(x % 5 == 0) {
            printf("%d \n", x);
        } else {
            printf("%d ", x);
        }
        x++;
    }

    //e)
    for(unsigned int j = 1;j <= 20; j++) {
        if(j % 5 == 0) {
            printf("%u \n", j);
        } else {
            printf("%u ", j);
        }
    }
}

