/*
    Modificate la funzione realizzata in quadrato.c per formare il quadrato
    con qualsiasi carattere contenuto nel parametro di tipo carattere fillCharacter.
    Così, se side è 5 e fillCharacter è '#', questa funzione deve stampare:

    #####
    #####
    #####
    #####
    #####
*/

#include <stdio.h>

void generaQuadrato(int side, char fillCharacter);

int main(void) {
    generaQuadrato(5, '#');
}

void generaQuadrato(int side, char fillCharacter) {
    for(unsigned int i = 1; i <= side; i++) {
        for(unsigned int i = 1; i <= side; i++) {
            printf("%c", fillCharacter);
        }
        puts("");
    }
}