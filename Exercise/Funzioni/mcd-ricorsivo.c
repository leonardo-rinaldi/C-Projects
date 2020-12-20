/*
    Scrivete una funzione ricorsiva gcd che segue: se y è uguale a 0, allora
    gcd(x, y) è x; altrimenti gcd(x, y) è gcd(y, x % y), dove % è l'operatore 
    di resto.
*/

#include <stdio.h>

int gcd(int x, int y);

int main(void) {
    printf("%d \n", gcd(24, 12));
}

int gcd(int x, int y) {
    if(y == 0) {
        return x;
    } else {
        return gcd(y, x % y);
    }
}