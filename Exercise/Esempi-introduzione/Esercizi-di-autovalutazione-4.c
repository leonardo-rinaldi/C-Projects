/*
    Scrivete singole istruzioni in C per:

    a) Leggere il valore della variabile intera senza segno x con scanf. Usate lo
       specificatore di conversione %u.
    b) Leggere il valore della variabile intera della variabile intera senza segno y
       con scanf. Usate lo specificatore di conversione %u.
    c) Impostare la variabile intera senza segno i a 1.
    d) Impostare la variabile intera senza segno power a 1.
    e) Moltiplicare la variabile intera senza segno power per x e assegnare il risultato
       a power.
    f) Incrementare la variabile i a 1.
    g) Testare i per vedere se è minore o uguale a y nella condizione di un'istruzione while.
    h) Stampare la variabile intera senza segno power con printf. Usare lo specificatore di
       conversione %u.
*/

#include <stdio.h>

int main(void) {
    unsigned int x;
    puts("Inserisci un intero x:");
    scanf("%u \n", &x);

    unsigned int y;
    puts("Inserisci un intero y");
    scanf("%u \n", &y);

    unsigned int i = 1;

    unsigned int power = 1;

    power *= x;

    while(i <= y) {
       i++;
    }

    printf("%u \n", power);
}