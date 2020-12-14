/*
    Scrivete un programma che legga un numero intero (di 5 cifre o meno) e
    determini e stampi quante cifre uguali a 7 ci sono nel numero.
*/

#include <stdio.h>

int main(void) {
    int num;
    unsigned int contatore = 0;
    int cifra;
    unsigned int numeroCifreUguali;

    puts("Inserisci un numero intero di cinque cifre:");
    scanf("%d", &num);

    while(contatore < 5) {
        cifra = num % 10;
        num /= 10;

        if(cifra == 7) {
            numeroCifreUguali++;
        }
        contatore++;
    }
    printf("Il numero di cifre uguali a 7 è: %d \n", numeroCifreUguali);
}