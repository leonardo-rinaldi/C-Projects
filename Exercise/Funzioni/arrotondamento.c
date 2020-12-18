/*
    Un'applicazione della funzione floor è l'arrotondamento di un valore
    all'intero più vicino. L'istruzione

    y = floor(x + .5);

    arrotonda il numero x all'intero più vicino e assegna il risultato a y
    Scrivete un programm che legga diversi numeri e usi l'istruzione 
    precedente per arrotondare ognuno di essi all'intero più vicino. Per ogni
    numero processato stampate sia il numero originario sia il numero arrotondato. 
*/

#include <stdio.h>
#include <math.h>

int arrotonda(double x);

int main(void) {
    double numero;

    for(unsigned int i = 0; i < 10; i++) {
        puts("Inserisci un numero da arrotondare:");
        scanf("%lf", &numero);
        printf("Il numero %.2lf arrotondato all'intero più vicino è: %d \n", numero, arrotonda(numero));
    }
}

int arrotonda(double x) {
    int y;
    y = floor(x + .5);
    return y;
}
