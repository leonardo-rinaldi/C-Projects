/*
    Scrivete un programma che legga cinque numeri (ognuno tra 1 e 30).
    Per ogni numero letto, il vostro programma deve stampare una riga
    contenente quel numero di asterischi contigui. Ad esempio, se il
    vostro programma legge il numero sette, deve stampare *******.
*/

#include <stdio.h>

int main(void) {
    unsigned int numeroInserito;

    for(unsigned int i = 1; i <= 5; i++) {
        puts("inserisci un numero intero compreso tra 1 e 30");
        scanf("%u", &numeroInserito);

        if(numeroInserito >= 1 && numeroInserito <= 30) {

            for(unsigned int j = 1; j <= numeroInserito; j++) {
                printf("%s", "*");
            }

        } else {
            puts("");
            puts("Errore, %u non è compreso tra 1 e 30");
        }
        puts("");
    }
}