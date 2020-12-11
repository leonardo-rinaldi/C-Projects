/*
    Scrivete un programma che legga un intero e determini e stampi se sia
    dispari o pari.
*/

#include <stdio.h>

int main(void) {
    int num;

    printf("%s", "Inserisci un intero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("%d è pari \n", num);
    } else {
        printf("%d è dispari \n", num);
    }
}