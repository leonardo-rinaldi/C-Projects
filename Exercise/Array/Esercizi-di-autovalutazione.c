/*
    Eseguite le istruzioni che seguono riguardanti un array chiamato fractions.
    a) Definite una costante simbolica SIZE da sostituire con il testo di
       sostituzione 10.
    b) Definite un array con un numero uguale a SIZE di elementi di tipo double
       e inizializzate gli elementi a 0.
    c) Indicate l'elemento 4 dell'array.
    d) Assegnate il valore 1.667 all'elemento nove dell'array.
    e) Assegnate il valore 3.333 al settimo elemento dell'array.
    f) Stampate gli elementi 6 e 9 dell'array con due cifre di precisione alla
       destra del punto decimale e mostrate l'output che viene stampato sullo schermo.
    g) Stampate tutti gli elementi dell'array usando un'istruzione di iterazione for. 
       Supponete che la variabile intera x sia definita come una variabile di ocntrollo 
       per il ciclo.
    Mostrate l'output.
*/

#include <stdio.h>
#define SIZE 10

int main(void) {

    double fractions[SIZE] = {0};

    double elementoQuattro = fractions[3];

    fractions[9] = 1.667;
    fractions[6] = 3.333;

    printf("%.2lf \n", fractions[6]);
    printf("%.2lf \n", fractions[9]);

    for(size_t x = 0; x < SIZE; x++) {
        printf("%lf \n", fractions[x]);
    }

}