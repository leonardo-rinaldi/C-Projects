/*
    Scrivete una funzione ricorsiva recursiveMinimum che riceva come
    argomenti un array intero e la dimensione del'array e restituisca
    l'elemento più piccolo dell'array. La funzione deve arrestare
    l'elaborazione e tornare alla funzione chiamante quando riceve un
    array di un solo elemento.
*/

#include <stdio.h>
#define SIZE 10

int recursiveMinumum(int array[], int dimensione);

int main(void) {
    int numeriInteri[SIZE] = {14, 4, 21, 15, 55, 9, 39, 7, 99, 2};
    int minimo = recursiveMinumum(numeriInteri, SIZE);
    printf("%d \n", minimo);
}

int recursiveMinumum(int array[], int dimensione) {
    if(dimensione == 0) {
        return array[0];
    } else {
        int min = recursiveMinumum(array, dimensione - 1);

        if(array[dimensione - 1] < min) {
            return array[dimensione - 1];
        } else {
            return min;
        }
    }
}