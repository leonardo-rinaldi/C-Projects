/*
    Un palindromo è un numero o una frase di un testo che si legge
    all'indietro e in avanti. Ad esempio, ognuno dei seguenti numeri
    a cinque cifre è un palindromo: 12321, 55555, 45554, 11611. Scrivete
    un programma che legga un numero intero di cinque cifre e determini se
    sia o meno palindromo.
*/

#include <stdio.h>

int main(void) {
    int num;
    int primaCifra;
    int secondaCifra;
    int terzaCifra;
    int quartaCifra;
    int quintaCifra;

    puts("Inserisci un numero intero di cinque cifre:");
    scanf("%d", &num);

    primaCifra = num / 10000;
    num %= 10000;
    secondaCifra = num / 1000;
    num %= 1000;
    terzaCifra = num / 100;
    num %= 100;
    quartaCifra = num / 10;
    num %= 10;
    quintaCifra = num;

    if(primaCifra == quintaCifra && secondaCifra == quartaCifra) {
        puts("Il numero è palindromo");
    } else {
        puts("Il numero non è palindromo");
    }
}