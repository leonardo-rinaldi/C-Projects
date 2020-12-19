/*
    Un intero è un numero primo se è divisibile solo per 1 e per se stesso. Ad
    esempio, 2, 3, 5 e 7 sono numeri primi, ma 4, 6, 8, 9 non lo sono.
    a) Scrivete una funzione che determini se un numero è primo.
    b) Usate questa funzione in un programma che determini e stampi tutti i numeri 
       primi tra 1 e 10000.
*/

#include <stdio.h>
#include <stdbool.h>

bool valutaNumeroPrimo(int numero);

int main(void) {
    for(unsigned int i = 1; i <= 10000; i++) {
        bool isPrime = valutaNumeroPrimo(i);

        if(isPrime == 1) {
            printf("%d è un numero primo \n", i);
        } 
    }
}

bool valutaNumeroPrimo(int numero) {
    bool risultato = true;

    if(numero == 1) {
        risultato = false;
    }

    for(int i = 2; i <= numero / 2; i++) {
         if(numero % i == 0) {
                risultato = false;
                break;
            }
    }
    return risultato;
}