/*
    Modificate il programma iterattivo sulla ricerca binaria in modo da usare una
    funzione ricorsiva linearSearch per eseguire la ricerca binaria in un array. La 
    funzione deve ricevere come argomenti un array intero, gli indici di partenza e di 
    fine dell'intervallo da considerare e la chiave di ricerca. Se viene trovata la 
    chiave di ricerca, fate restituire l'indice corrispondente dell'array.
*/

#include <stdio.h>
#define SIZE 10

int binarySearch(int array[], int inizio, int fine, int key);

int main(void) {
    int numeriInteri[SIZE] = {14, 4, 21, 15, 55, 9, 39, 7, 99, 2};
    int posizione = binarySearch(numeriInteri, 0, SIZE - 1, 55);
    printf("%d", posizione);
}

int binarySearch(int array[], int inizio, int fine, int key) {
    int middle = inizio + fine / 2;

    if(array[middle] == key) {
        return middle;
    } else {
        if(key > array[middle]) {
            return binarySearch(array, middle, fine, key);
        } else {
            return binarySearch(array, inizio, middle, key);
        }
    }
}