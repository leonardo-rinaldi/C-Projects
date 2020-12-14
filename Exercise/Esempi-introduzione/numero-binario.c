/*
    Inserite un numerointero (di 5 cifre o meno) contenete soltanto zeri
    e uni (cioè un numero intero binario) e stampate il suo equivalente 
    decimale.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    int num;
    int esponente = 0;
    int cifra;
    int numeroConvertito = 0;

    puts("Inserisci un numero binario di 5 cifre:");
    scanf("%d", &num);

    while(esponente < 5) {
        cifra = num % 10;
        num /= 10;

        numeroConvertito = numeroConvertito + (cifra * pow(2, esponente));
        esponente++;
    }

    printf("Il numero convertito è: %d \n", numeroConvertito);
}