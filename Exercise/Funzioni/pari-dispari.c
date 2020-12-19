/*
    Scrivete un programma che riceva in ingresso una serie di interi e li
    passi uno alla volta alla funzione even, che usa l'operatore di resto
    per determinare se un intero è pari. La funzione deve prendere un 
    argomento intero e restituire 1 se l'intero è pari e 0 nel caso contrario.
*/

#include <stdio.h>

int even(int number);

int main(void) {
    printf("%d \n", even(4));
    printf("%d \n", even(3));
}

int even(int number) {
    int risultato;

    if(number % 2 == 0) {
        risultato = 0;
    } else {
        risultato = 1;
    }
    return risultato;
}

