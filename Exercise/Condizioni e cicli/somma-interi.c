/*
    Scrivete un programma che sommi una sequenza di interi. Supponete
    che il primo intero letto con scanf specifichi il numero di valori
    che restano da inserire. Il vostro programma deve leggere solo un 
    valore a ogni esecuzione di scanf. Una tipica sequenza di input
    potrebbe essere
    5 100 200 300 400 500
    dove il 5 indica che i cinque valori successivi si devono sommare.
*/

#include <stdio.h>

int main(void) {
    unsigned int numeroInteri;
    int numeroDaSommare;
    int somma = 0;

    puts("Inserisci il numero di interi che desideri sommare:");
    scanf("%u", &numeroInteri);

    for(unsigned int i = 1; i <= 5; i++) {
        puts("Inserisci un intero per la somma:");
        scanf("%u", &numeroDaSommare);
        somma += numeroDaSommare;
    }

    printf("Il risultato della somma è: %d \n", somma);
}