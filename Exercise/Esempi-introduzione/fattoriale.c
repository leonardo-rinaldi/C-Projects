/*
    Scrivete un programma che legga un intero non negativo e calcoli e
    stampi il suo fattoriale.
*/

#include <stdio.h>

int main(void) {
    int num;
    int risultato = 1;

    puts("Inserisci un numero intero non negativo:");
    scanf("%d", &num);

    while(num > 0) {
        risultato *= num;
        num--;
    }

    printf("Il risultato è %d \n", risultato);
}