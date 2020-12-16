/*
    Scrivete un programma che calcoli e stampi il prodotto degli interi dispari
    da 1 a 15.
*/

#include <stdio.h>

int main(void) {
    int prodotto = 1;

    for(unsigned int i = 1; i <= 15; i += 2) {
        prodotto *= i;
    }

    printf("Il risultato della somma è: %d \n", prodotto);
}