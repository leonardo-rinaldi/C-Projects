/*
    Eseguite ognuna delle seguenti operazioni e rispondete alle domande.
    a) Definite un array di tipo unsigned int chiamatao values con cinque
       elementi e inizializzate gli elementi con gli interi pari da 2 a 10.
       Supponete che la costante simbolica SIZE ia definita come 5.
    b) Definite un puntatore vPtr che punta a un oggetto di tipo unsigned int.
    c) Stampate gli elementi del'array values usando la notazione con indice degli 
       array. Usate un'istruzione for e supponete che la variabile di controllo intera
       i sia stata definia.
    d) Scrivete due istruzioni separate che assegnino l'indirizzo di partenza dell'array
       values alla variabile puntatore vPtr.
    e) Stampate gli elementi dell'array values usando la notazione puntatore/offset.
    f) Stampate gli elementi dell'array values usando la notazione puntatore/offset con il
       nome dell'array come puntatore.
    g) Stampate gli elementi dell'array values usando il puntatore all'array con indice.
    h) Fate riferimento all'elemento 5 dell'array values usando la notazione con indice degli
       array, la notazione puntatore/offset con il nome dell'array come puntatore, la notazione
       con indice che usa il puntatore e la notazione puntatore/offset.
*/

#include <stdio.h>
#define SIZE 5

int main(void) {
    //a)
    unsigned int values[SIZE] = {2, 4, 6, 8, 10};

    //b)
    unsigned int *vPtr;

    //c)
    for(size_t i = 0; i < SIZE; i++) {
        printf("%u ", values[i]);
    }
    puts("");

    //d)
    vPtr = values;
    vPtr = &values[0];

    //e)
    for(size_t offset = 0; offset < SIZE; offset++) {
        printf("%u ", *(vPtr + offset));
    }
    puts("");

    //f)
    for(size_t offset = 0; offset < SIZE; offset++) {
        printf("%u ", *(values + offset));
    }
    puts("");

    //g)
    for(size_t i = 0; i < SIZE; i++) {
        printf("%u ", vPtr[i]);
    }
    puts("");

    //h)
    printf("%u \n", values[4]);
    printf("%u \n", *(values + 4));
    printf("%u \n", vPtr[4]);
    printf("%u \n", *(vPtr + 4));
}