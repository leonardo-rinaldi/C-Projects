/*
    Esempio di puntatore non costante a dati non costanti
    trasformare una stringa da minuscola a maiuscola usando
    un puntatore.
*/

#include <stdio.h>
#include <ctype.h>

void converToUppercase(char *sPtr);

int main(void) {
    char string[] = "cHaRaCters and $32.98";

    printf("The string before conversion is: %s", string);
    converToUppercase(string);
    printf("\nThe string after conversion is: %s\n", string);
}

void converToUppercase(char *sPtr) {
    while(*sPtr != '\0') {
        *sPtr = toupper(*sPtr);
        ++sPtr;
    }
}