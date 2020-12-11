/*
    Scrivete un programma che riceva in ingresso un numero
    di cinque cifre, separi il numero nelle sue cifre individuali
    e stampi le cifre ciascuna separata dall'altra da tre spazi.
    Ad esempio, se l'utente scrive 42139, il programma deve stampare:

    4 2 1 3 9
*/

#include <stdio.h>

int main(void) {
    int num;

    printf("%s", "Inserisci un intero: ");
    scanf("%d", &num);

    int primaCifra, secondaCifra, terzaCifra, quartaCifra, quintaCifra;

    primaCifra = num / 10000;
    num = num % 10000;
    secondaCifra = num / 1000;
    num = num % 1000;
    terzaCifra = num / 100;
    num = num % 100;
    quartaCifra = num / 10;
    num = num % 10;
    quintaCifra = num;

    printf("%d %d %d %d %d \n", primaCifra, secondaCifra, terzaCifra, quartaCifra, quintaCifra);
}