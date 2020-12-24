/*
    Usate un array unidimensionale per risolvere il seguente problema. Memorizzate 20 numeri,
    ognuno dei quali compreso tra 10 e 100, estremi inclusi. Quando un numero viene letto,
    stampatelo solo se non è un duplicato di un numero già letto. Tenete conto del "caso peggiore", 
    in cui tutti i 20 numeri sono differenti.
*/

#include <stdio.h>
#include <stdbool.h>

void stampaArray(const int numeri[]);
bool controllaPresenza(const int numeri[], int numeroInserito);

int main(void) {
    int numeri[20] = {0};
    int numeroInserito;
    int contatore = 0;
    bool numeroPresente;

    while(contatore != 20) {

        puts("inserire un numero:");
        scanf("%d", &numeroInserito);
        numeroPresente = false;
        numeroPresente = controllaPresenza(numeri, numeroInserito);

        if(numeroPresente == false) {
            numeri[contatore] = numeroInserito;
        } else {
            contatore--;
        }
        contatore++;
    }
    stampaArray(numeri);
}

bool controllaPresenza(const int numeri[], int numeroInserito) {
    bool numeroPresente = false;

    for(size_t i = 0; i < 20; i++) {
        if(numeroInserito == numeri[i]) {
            puts("Numero già inserito");
            numeroPresente = true;
            break;
        }
    }
    return numeroPresente;
}

void stampaArray(const int numeri[]) {
    for(size_t i = 0; i < 20; i++) {
        printf("%d ", numeri[i]);
    }
    puts("");
}