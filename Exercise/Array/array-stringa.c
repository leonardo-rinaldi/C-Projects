/*
    Inserita un astringa, viene stampata con uno spazio tra
    ogni carattere.
*/

#include <stdio.h>
#define SIZE 20

int main(void) {
    char string1[SIZE];

    puts("Inserisci una stringa:");
    scanf("%19s", string1);

    for(size_t i = 0; i < SIZE && string1[i] != '\0'; i++) {
        printf("%c ", string1[i]);
    }
    puts("");
}