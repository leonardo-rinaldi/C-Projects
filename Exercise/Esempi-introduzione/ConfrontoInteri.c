/*
    Scrivere un programma che chieda all'utente di inserire due interi,
    che legga tali numeri e quindi stampi il numero maggiore seguito dalle
    parole "is larger". Se i numeri sono uguali, stampate il messaggio "These
    numbers are equal". Usate solamente la forma a selezione singola 
    dell'istruzione if.
*/

#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("%s", "Inserire due interi:");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2) {
        printf("%d is larger \n", num1);
    }

    if(num1 < num2) {
        printf("%d is larger \n", num2);
    }

    if(num1 == num2) {
        printf("%s", "These numbers are equal \n");
    }
}