/*
    Scrivete un programma che stampi una tabella dei valori equivalenti ottali
    ed esadecimali dei numeri decimali nell'intervallo da 1 a 256.
*/

#include <stdio.h>

int main(void) {
    
    printf("%s  ", "Decimale");
    printf("%s  ", "Esadecimale");
    printf("%s \n", "Ottale");

    for(unsigned int i = 1; i <= 256; i++) {
        printf("%d", i);
        printf("%10X", i);
        printf("%13o \n", i);
    }
}