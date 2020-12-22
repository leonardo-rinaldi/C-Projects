/*
    Algoritmo di ricerca binaria per un array.
*/

#include <stdio.h>
#define SIZE 15

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);

int main(void) {
    int a[SIZE];

    //crea i dati
    for(size_t i = 0; i < SIZE; i++) {
        a[i] = 2 * i;
    }

    puts("Inserisci la key da cercare nell'array,");
    puts("compresa tra 0 e 28");
    int key;
    scanf("%d", &key);

    size_t risultato = binarySearch(a, key, 0, SIZE - 1);

    if(risultato != -1) {
        printf("la chiave %d si trova alla posizione %zu \n", key, risultato);
    } else {
        printf("La chiave %d non si trova nell'array \n", key);
    }

}

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high) {

    while(low <= high) {    //finchè ci sono elementi da analizzare
        size_t middle = (low + high) / 2;

        if(searchKey == b[middle]) {    //se la chiave è uguale all'elemento nella posizione centrale, ho trovato l'elemento
            return middle;
        } else if(searchKey < b[middle]) {  //altrimenti cerca nella prima parte dell'array
            high = middle - 1;
        } else {    //oppure cerca nella seconda parte dell'array
            low = middle + 1;
        }
    }
    return -1;
}

