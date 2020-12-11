/*
    Srivere un programma che stampi sulla stessa riga i numeri da 1 a 4. 
    Scrivete il programma usando i seguenti modi.
    a) Uso di una sola istruzione printf senza specificatori di conversione.
    b) Uso di una sola istruzione printf con quattro specificatori di conversione.
    c) Uso di quattro istruzioni printf.
*/

#include <stdio.h>

int main(void) {
    printf("1, 2, 3, 4 \n");
    printf("%s", "1, 2, 3, 4 \n");
    printf("%s", "1, ");
    printf("%s", "2, ");
    printf("%s", "3, ");
    printf("%s", "4");
}