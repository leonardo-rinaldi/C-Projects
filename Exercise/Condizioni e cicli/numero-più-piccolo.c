/*
    Scrivete un programma che trovi il più piccolo di diversi numeri interi.
    Supponete che il primo valore letto specifichi il numero dei restanti valori.
*/

#include <stdio.h>

int main(void) {
    int numeroInserito;
    int dimensione;
    int numeroPiùPiccolo = 0;

    puts("Inserisci il numero di valori totali:");
    scanf("%d", &dimensione);
    puts("Inserisci un numero intero:");
    scanf("%d", &numeroInserito);
    numeroPiùPiccolo = numeroInserito;

    for(unsigned int i; i < dimensione - 1; i++) {
        puts("Inserisci un numero intero:");
        scanf("%d", &numeroInserito);

        if(numeroInserito < numeroPiùPiccolo) {
            numeroPiùPiccolo = numeroInserito;
        }
    }

    printf("Il numero inserito più piccolo è: %d \n", numeroPiùPiccolo);
}