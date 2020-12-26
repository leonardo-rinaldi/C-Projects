/*
    Scrivete un programma che produca 20 numeri a caso tra 1 e 20. Il programma
    deve memorizzare tutti i valori non dulicati nell'array. Usate l'array più
    piccolo possibile per eseguire questo compito.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool presenzaNumero(const int numeri[], int numeroInserito);
void stampaArray(const int numeri[]);

int main(void) {
    srand(time(NULL));
    int numeri[20] = {0};
    int contatore = 0;

    while(contatore != 20) {
        int numeroGenerato = 1 + rand() % 20;
        bool numeroPresente = presenzaNumero(numeri, numeroGenerato);

        if(numeroPresente == false) {
            numeri[contatore] = numeroGenerato;
        } else {
            contatore--;
        }
        contatore++;
    }
    stampaArray(numeri);
}

bool presenzaNumero(const int numeri[], int numeroGenerato) {
    for(size_t i = 0; i < 20; i++) {
        if(numeri[i] == numeroGenerato) {
            return true;
        }
    }
    return false;
}

void stampaArray(const int numeri[]) {
    for(size_t i = 0; i < 20; i++) {
        printf("%d ", numeri[i]);
    }
    puts("");
}