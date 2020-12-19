/*
    Scrivete una funzione che stampi un quadrato di asterischi pieno il
    cui lato è specificato nel parametro intero side. Ad esempio, se side
    è 4, la funzione stampa:

    ****
    ****
    ****
    ****
*/

#include <stdio.h>

void generaQuadrato(int side);

int main(void) {
    generaQuadrato(4);
}

void generaQuadrato(int side) {
    for(unsigned int i = 1; i <= side; i++) {
        for(unsigned int i = 1; i <= side; i++) {
            printf("%s", "*");
        }
        puts("");
    }
}