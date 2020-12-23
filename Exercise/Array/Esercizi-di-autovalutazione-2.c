/*
    Scrivete istruzioni per effettuare le seguenti operazioni:
    a) Definite table come un array intero con 3 righe e 3 colonne.
       Supponete che la costante simbolica SIZE sia stata definita come
       valelore 3.
    b) Quanti elementi contiene l'array table? Stampate il numero totale
       di elementi.
    c) Usate un'istruzione di iterazione for per inizializzare ogni elemento
       di table alla somma dei suoi indici. Supponete che le variabili intere
       x e y siano definite come variabili di controllo.
    d) Stampate i valori di ogni elemento dell'array table.
    e) Supponete che l'array sia stato inizializzato con la definizione:
       int table2[SIZE][SIZE] = { {1, 8}, {2, 4, 6}, {5} } , stampate l'array.
*/

#include <stdio.h>
#define SIZE 3

int main(void) {

    int table[SIZE][SIZE];

    for(size_t i = 0; i < SIZE; i++) {
        for(size_t j = 0; j < SIZE; j++) {
            printf("%d", table[i][j]);
        }
        puts("");
    }

    for(size_t x = 0; x < SIZE; x++) {
        for(size_t y = 0; y < SIZE; y++) {
            table[x][y] = x + y;
        }
    }

    for(size_t x = 0; x < SIZE; x++) {
        for(size_t y = 0; y < SIZE; y++) {
            printf("%d", table[x][y]);
        }
        puts("");
    }

    int table2[SIZE][SIZE] = { {3, 8}, {2, 4, 6}, {5}};

    for(size_t x = 0; x < SIZE; x++) {
        for(size_t y = 0; y < SIZE; y++) {
            printf("%d", table2[x][y]);
        }
        puts("");
    }
}