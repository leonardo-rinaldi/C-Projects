/*
    Scrivere un programma che riceva in ingresso due diversi
    interi dalla tastiera, poi stampi la somma, la media, il prodotto,
    il minore e il maggiore di questi numeri. Usate solamente la forma 
    a selezione singola dell'istruzione if.
*/

#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("%s", "Inserire due diversi interi: ");
    scanf("%d %d", &num1, &num2);

    int somma, media, prodotto, minore, maggiore;

    somma = num1 + num2;
    media = (num1 + num2) / 2;
    prodotto = num1 * num2;

    if(num1 > num2) {
        maggiore = num1;
        minore = num2;
    }

    if(num1 < num2) {
        maggiore = num2;
        minore = num1;
    }

    printf("Somma: %d \n", somma);
    printf("Media: %d \n", media);
    printf("Prodotto: %d \n", prodotto);
    printf("Minore: %d \n", minore);
    printf("Maggiore: %d \n", maggiore);
}