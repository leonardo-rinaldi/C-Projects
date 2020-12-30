/*
    Dimostrazione indicizzazione e offset con un puntatore
*/

#include <stdio.h>
#define ARRAY_SIZE 4

int main(void) {
    int b[] = {10, 20, 30, 40};
    int *bPtr = b;

    //stampa l'array b usando la notazione degli array con indice
    puts("Array b printed with:\nArray index notation");

    for(size_t i = 0; i < ARRAY_SIZE; i++) {
        printf("b[%zu] = %d\n", i, b[i]);
    }

    //stampa l'array b con il nome e la notazione puntatore/offset
    puts("\nPointer/offset notation where\n"
         "the pointer is the array name");

    for(size_t offset = 0; offset < ARRAY_SIZE; offset++) {
        printf("*(b + %zu) = %d\n", offset, *(b + offset));  //mi restituisce b[offset]
    }

    //stampa l'array b con bPtr e la notazione degli array con indice
    puts("\nPointer subscript notation");

    for(size_t i = 0; i < ARRAY_SIZE; i++) {
        printf("bPtr[%zu] = %d\n", i, bPtr[i]);  //equivale a b[i]
    }

    //stampa l'array b usando bPtr e la notazione puntatore/offset
    puts("\nPointer/offset notation");

    for(size_t offset = 0; offset < ARRAY_SIZE; offset++) {
        printf("*(bPtr + %zu) = %d\n", offset, *(bPtr + offset));
    }
}
