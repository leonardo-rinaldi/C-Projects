/*
    Usando le istruzioni che avete scritto nell'Esercizio 2.4,
    scrivete un programma completo che calcoli il prodotto di
    tre interi.
*/

#include <stdio.h>

int main(void) {
    int x, y, z;

    printf("%s", "Inserisci tre interi:\n");
    scanf("%d %d %d", &x, &y, &z);

    int result;
    result = x * y * z;

    printf("Il prodotto è: %d\n", result);
}