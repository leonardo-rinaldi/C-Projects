/*
    E' interessante osservare la ricorsione "in azione". Modificate la funzione
    fattoriale factorial per stampare la sua variabile locale, ovvero il parametro
    della chiamata ricorsiva.
*/

#include <stdio.h>

unsigned long long int factorial(unsigned int number);

int main(void) {
    for(unsigned int i = 0; i <= 21; i++) {
        printf("%u! = %llu\n", i, factorial(i));
    }
}

unsigned long long int factorial(unsigned int number) {
    puts("");
    printf("Parametro = %u", number);
    puts("");

    if(number <= 1) {
        return 1;
    } else {
        return (number * factorial(number - 1));
    }
}