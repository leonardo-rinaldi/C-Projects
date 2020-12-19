/*
    Scrivete una funzione qualityPoints che riceva in ingresso la media dei voti
    di uno studente e restituisca 4 se questa è compresa nell'intervallo 90-100,
    3 se è tra 80-89, 2 se è tra 70-79, 1 se è tra 60-69 e 0 se la media è più
    bassa di 60.
*/



#include <stdio.h>

int qualityPoints(int voto);

int main(void) {
    printf("%d",qualityPoints(70));
}

int qualityPoints(int voto) {
    int risultato;

    if(voto >= 90 && voto <= 100) {
        risultato = 4;
    } else
    if(voto >= 80 && voto <= 89) {
        risultato = 3;
    } else 
    if(voto >= 70 && voto <= 79) {
        risultato = 2;
    } else 
    if(voto >= 60 && voto <= 69) {
        risultato = 1;
    } else {
        risultato = 0;
    }

    return risultato;
}