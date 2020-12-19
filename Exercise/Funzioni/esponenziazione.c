/*
    Scrivete una funzione integerPower(base, exponent) che restituisca il valore
    base^exponent.
    Ad esempio, integerPower(3, 4) = 3 * 3 * 3 * 3. Supponete che exponent sia un
    intero positivo diverso da zero e che base sia un intero. La funzione integerPower
    deve usare for come struttura di controllo per il calcolo. Non usate alcuna funzione
    dela libreria math.
*/

#include <stdio.h>

int integerPower(int base, unsigned int exponent);

int main(void) {
    printf("%d \n", integerPower(3, 4));
    printf("%d \n", integerPower(2, 3));
}

int integerPower(int base, unsigned int exponent) {
    int risultato = 1;

    for(unsigned int i = 1; i <= exponent; i++) {
        risultato *= base;
    }
    return risultato;
}