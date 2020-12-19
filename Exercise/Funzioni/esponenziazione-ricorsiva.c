/*
    Scrivete una funzione ricorsiva power(base, exponent) che quando viene
    invocata restituisca

    base^exponent

    Ad esempio, power(3,4) = 3 * 3 * 3 * 3. Supponete che exponent sia un intero
    maggiore o uguale a 1.
*/

#include <stdio.h>

int power(int base, int exponent);

int main(void) {
    printf("%d \n", power(3, 4));
}

int power(int base, int exponent) {
    if(exponent == 1) {
        return base;
    } else {
        return base * power(base, exponent - 1);
    }
}
