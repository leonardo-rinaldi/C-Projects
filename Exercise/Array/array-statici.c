/*
    Esempio di array locali statici e array locali automatici
*/

#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(void) {
    puts("First call to each function:");
    staticArrayInit();
    automaticArrayInit();

    puts("\n\nSecond call to each function:");
    staticArrayInit();
    automaticArrayInit();
}

//funzione usata per illustrare un array locale statico

void staticArrayInit(void) {
    static int array1[3];

    puts("\nValues on entering staticArrayinit:");

    for(size_t i = 0; i <= 2; i++) {
        printf("array[%zu] = %d ", i, array1[i]);
    }
    puts("\nValues on exiting staticArrayInit:");

    for(size_t i = 0; i <= 2; i++) {
        printf("array1[%zu] = %d ", i, array1[i] += 5);
    }
}

//funzione usata per illustrare un array locale automatico

void automaticArrayInit(void) {
    int array2[3] = {1, 2, 3};

    puts("\n\nValues on entering automaticArrayInit:");

    for(size_t i = 0; i <= 2; i++) {
        printf("array2[%zu] = %d ", i, array2[i]);
    }

    puts("\nValues on exiting automaticArrayInit:");

    for(size_t i = 0; i <= 2; i++) {
        printf("array2[%zu] = %d ", i, array2[i] += 5);
    }
}