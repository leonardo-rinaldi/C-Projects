/*
    Effettuare una ricerca in un array con la ricerca lineare.
*/

#include <stdio.h>
#define SIZE 100

size_t linearSearch(const int array[], int key, size_t size);

int main(void) {
    int a[SIZE];

    //crea alcuni dati

    for(size_t x = 0; x < SIZE; x++) {
        a[x] = 2 * x;
    }

    printf("Enter integer search key:");
    int searchKey;
    scanf("%d", &searchKey);

    //tenta di localizzare searchKey nell'array a
    size_t index = linearSearch(a, searchKey, SIZE);

    //stampa i risultati
    if(index != -1) {
        printf("Found value in element %zu\n", index);
    } else {
        puts("Value not found");
    }
}

size_t linearSearch(const int array[], int key, size_t size) {
    for(size_t n = 0; n < size; n++) {
        if(array[n] == key) {
            return n;
        }
    }
    return -1;
}