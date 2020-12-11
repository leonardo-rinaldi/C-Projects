/*
    Scrivere un programma che chieda all'utente di inserire due numeri,
     che li legga e ne stampi la somma, il prodotto, la differenza, il 
     quoziente e il resto
*/

#include <stdio.h>

int main(void) {

    int num1, num2;

    printf("%s", "Inserisci due numeri:");
    scanf("%d %d", &num1, &num2);

    int somma, prodotto, differenza, quoziente, resto;
    somma = num1 + num2;
    prodotto = num1 * num2;
    quoziente = num1 / num2;
    resto = num1 % num2;

    printf("Somma: %d \n", somma);
    printf("Prodotto: %d \n", prodotto);
    printf("Quoziente: %d \n", quoziente);
    printf("Resto: %d \n", resto);
}