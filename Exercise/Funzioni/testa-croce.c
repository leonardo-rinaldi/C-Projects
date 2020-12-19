/*
    Scrivete un programma che simuli il lancio di una moneta. Per ogni lancio della
    moneta il programma deve stampare head (testa) o tail (croce). Fate lanciare al
    programma la moneta 100 volte e contate il numero di volte in cui compare ogni lato
    della moneta. Stampate i risultati. Il programma deve chiamare una funzione separata 
    flip che non riceve alcun argomento e restituisce 1 per croce e 2 per testa. 
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int flip(void);

int main(void) {
     srand(time(NULL));

    for(unsigned int i = 1; i <= 100; i++) {
        int faccia = flip();
        
        if(faccia == 1) {
            puts("Croce");
        } else {
            puts("Testa");
        }
    }
}

int flip(void) {
    int faccia = 1 + rand() % 2;
    return faccia;
}