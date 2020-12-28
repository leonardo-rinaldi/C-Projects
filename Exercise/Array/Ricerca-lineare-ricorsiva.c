/*
    Modificate il programma sulla ricerca lineare iterattiva in modo da usare la
    funzione ricorsiva linearSearch per eseguire la ricerca lineare in un array. La
    funzione deve ricevere come argomenti un array intero, la dimensione dell'array 
    e la chiave di ricerca. Se viene trovata la chiave di ricerca, fate restituire 
    l'indice corrispondente dell'array, altrimenti - 1;
*/

#include <stdio.h>
#define SIZE 10

int linearSearch(int array[], int dimensione, int key);

int main(void) {
    int numeriInteri[SIZE] = {14, 4, 21, 15, 55, 9, 39, 7, 99, 2};
    int posizione = linearSearch(numeriInteri, SIZE, 55);
    printf("%d \n", posizione);
}

int linearSearch(int array[], int dimensione, int key) {
    if(array[dimensione] == key) {
        return dimensione;
    } else {
        return linearSearch(array, dimensione - 1, key);
    }
}