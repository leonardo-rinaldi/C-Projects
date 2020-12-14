/*
    Trovare i due valori più grandi tra 10 numeri.
*/

#include <stdio.h>

int main(void) {
    unsigned int i = 0;
    int numero;
    int max1 = 0;
    int max2 = 0;

    while(i < 10) {
        puts("Inserisci un numero:");
        scanf("%d", &numero);

        if(numero > max1) {
            max1 = numero;
        } else 
            if(numero > max2 && numero < max1) {
                max2 = numero;
            }
        i++;
    }

    printf("Il numero più grande è: %d \n", max1);
    printf("Il secondo numero più grande è: %d \n", max2);
}