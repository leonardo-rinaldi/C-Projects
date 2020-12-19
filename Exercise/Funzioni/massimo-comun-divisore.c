/*
    Il massimo comun divisore (GCD, Greatest Common Divisor) di due interi
    è l'intero più grande che divide in parti uguali ognuno dei due numeri.
    Scrivete la funzione gcd che restituisce il massimo comun divisore di 
    due interi.
*/

#include <stdio.h>

int gcd(int num1, int num2);

int main(void) {
    printf("%d", gcd(24, 12));
}

int gcd(int num1, int num2) {
    int risultato;

    for(int i = 1; i <= num1 && i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            risultato = i;
        }
    }
    return risultato;
}