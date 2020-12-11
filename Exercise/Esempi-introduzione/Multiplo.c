/*
    Scrivete un programma che legga due interi e determini e stampi se
    il primo è un multiplo del secondo.
*/

#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("%s", "Inserisci due numeri interi: ");
    scanf("%d %d", &num1, &num2);

    if(num2 % num1 == 0) {
        printf("%d è un multiplo di %d \n", num1, num2);
    } else {
        printf("%d non è un multiplo di %d \n", num1, num2);
    }
}