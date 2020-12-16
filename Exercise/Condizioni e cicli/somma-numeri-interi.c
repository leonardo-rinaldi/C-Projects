/*
    Scrivete il programma che calcoli e stampi la somma degli interi
    pari da 2 a 30.
*/

#include <stdio.h>

int main(void) {
    int somma = 0;

    for(unsigned int i = 2; i <= 30; i+= 2) {
        somma += i;
    }

    printf("Il risultato della somma è: %d \n", somma);
}