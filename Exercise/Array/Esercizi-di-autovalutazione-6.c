/*
    Scrivete dei cicli che effetuino ognuna delle seguenti operazioni su array con indice
    singolo:
    a) Inizializzare i 10 elementi dll'array intero count a zero.
    b) Aggiungere 1 a ognuno dei 15 elementi dell'array intero bonus.
    c) Leggere i 12 valori dell'array in virgola mobile monthlyTemperatures dalla tastiera.
    d) Stampare i cinque valori dell'array intero bestScores nel formato a colonne.
*/

#include <stdio.h>

int main(void) {
    int counts[10];
    int bonus[15] = {0};
    double monthlyTemperatures[12] = {0};
    int bestScores[5] = {30, 26, 29, 40, 28};

    for(size_t i = 0; i < 10; i++) {
        counts[i] = 0;
    }
    

    for(size_t i = 0; i < 15; i++) {
        bonus[i]+= 1;
    }

    puts("Inserisci i valori per l'array monthlyTemperatures:");
    for(size_t x = 0; x < 12; x++) {
        double temperatura;
        scanf("%lf", &temperatura);
        monthlyTemperatures[x] = temperatura;
    }

    for(size_t i = 0; i < 5; i++) {
        printf("%d ", bestScores[i]);
    }
    puts("");
}