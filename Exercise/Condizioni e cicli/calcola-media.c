/*
    Scrivete un programma che calcoli e stampi la media di diversi numeri
    interi. Supponete che l'ultimo valore letto con scanf sia la sentinella
    9999. Una tipica sequenza di input potrebbe essere
    10 8 11 7 9 9999
    che indica che va calcolata la media di tutti i valori che precedono 9999
*/

#include <stdio.h>

int main(void) {
    int valoreInserito;
    unsigned int contatore = 0;
    int media = 0;

    puts("Inserisci un numero intero (inserisci 9999 per fermarti):");
    scanf("%d", &valoreInserito);

    while(valoreInserito != 9999) {
        media += valoreInserito;
        puts("Inserisci un numero intero (inserisci 9999 per fermarti):");
        scanf("%d", &valoreInserito);
        contatore++;
    }

    media /= contatore;
    printf("La media risultante è: %d \n", media);
}