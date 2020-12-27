/*
    Scrivete una funzione ricorsiva printArray che riceva come argomenti
    un array di caratteri e la dimensione dell'array, stampi l'array e non 
    restituisca niente. La funzione deve arrestare l'elaborazione e tornare
    alla funzione chiamante quando essa riceve un array di dimensione zero.
*/

#include <stdio.h>
#define SIZE 10

void riempiArray(int numeri[]);
void printArray(int numeri[], int dimensione, int partenza);

int main(void) {
    int numeri[SIZE] = {0};
    riempiArray(numeri);
    printArray(numeri, SIZE, 0);
    puts("");
}

void riempiArray(int numeri[]) {
    for(size_t i = 0; i < 10; i++) {
        numeri[i] = i;
    }
}

void printArray(int numeri[], int dimensione, int partenza) {
    if(dimensione == partenza) {
        return;
    } else {
        printf("%d ", numeri[partenza]);
        printArray(numeri, dimensione, partenza + 1);
    }
}