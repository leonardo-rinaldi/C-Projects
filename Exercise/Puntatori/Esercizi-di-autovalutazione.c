/*
    Eseguite ognuna delle seguenti operazioni e rispondete alle domande. 
    a) Definite un array di tipo float chiamato numbers con 10 elementi e
       inizializzate gli elementi ai valori 0.0, 1.1, 2.2, ..., 9.9. Supponete
       che la costante simbolica SIZE sia stata definita come 10.
    b) Definite un puntatore, nPtr, che punta a un oggetto di tipo float.
    c) Stampate gli elementi dell'array numbers usando la notazione con indice
       per gli array. Usate un'istruzione for. Stampate ogni numero con 1 posizione 
       di precisione alla destra del punto decimale.
    d) Scrivete due diverse istruzioni che assegnino l'indirizzo di partenza dell'array
       number alla variabile puntatore nPtr.
    e) Stampate gli elementi dell'array numbers usando la notazione /offset con il puntatore
       nPtr.
    f) Stampate gli elementi dell'array numbers usando la notazione puntatore/offset con il nome
       dell'array come puntatore.
    g) Stampate gli elementi dell'array numbers indicizzando il puntatore nPtr
    h) Fate riferimento all'elemento 4 dell'array numbers usando la notazione con indice per gli
       array, la notazione puntatore/offset con il nome dell'array come puntatore, la notazione
       con indice per i puntatori con nPtr e la notazione puntatore/offset con nPtr.
*/

#include <stdio.h>
#define SIZE 10

int main(void) {

    //a)
    float numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    
    //b)
    float *nPtr = numbers;

    //c)
    for(size_t i = 0; i < SIZE; i++) {
        printf("%.1f ", numbers[i]);
    }
    puts("");

    //d)
    printf("%.1f", *nPtr);
    *nPtr = numbers[0];
    printf("%.1f", *nPtr);
    puts("");

    //e)
    for(size_t offset = 0; offset < SIZE; offset++) {
        printf("%.1f ", *(nPtr + offset));
    }
    puts("");

    //f)
    for(size_t i = 0; i < SIZE; i++) {
        printf("%.1f ", *(numbers + i));
    }
    puts("");

    //g)
    for(size_t i = 0; i < SIZE; i++) {
        printf("%.1f ", nPtr[i]);
    }
    puts("");

    //h)
    float quartoElemento = numbers[4];
    printf("%.1f \n", quartoElemento);

    quartoElemento = *(numbers + 4);
    printf("%.1f \n", quartoElemento);

    quartoElemento = nPtr[4];
    printf("%.1f \n", quartoElemento);

    quartoElemento = *(nPtr + 4);
    printf("%.1f \n", quartoElemento);
}