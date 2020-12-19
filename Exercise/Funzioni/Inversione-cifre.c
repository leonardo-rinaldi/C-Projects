/*
    Scrivete una funzione che riceva un valore intero e restituisca il numero
    con le sue cifre invertite. Ad esempio, dato il numero 7631, la funzione
    deve restituire 1367.
*/

#include <stdio.h>

void invertiNumero(int numero);
int trovaLunghezzaNumero(int numero);
int creaDivisore(int lunghezzaNumero);

int main(void) {
    invertiNumero(7631);
}

void invertiNumero(int numero) {
    int lunghezzaNumero = trovaLunghezzaNumero(numero);

    for(unsigned int i = 1; i <= lunghezzaNumero; i++) {
        int cifra = numero % 10;
        numero /= 10;
        printf("%d", cifra);
    }

}

/*
    Questa procedura ritorna il numero di cifre di un
    numero.
*/

int trovaLunghezzaNumero(int numero) {
    int lunghezza = 0;

    while(numero != 0) {
        numero /= 10;
        lunghezza++;
    }
    return lunghezza;
}
