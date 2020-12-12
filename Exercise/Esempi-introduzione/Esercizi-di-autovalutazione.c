/*
    Scrivete quattro differenti istruzioni in C che sommino 1
    alla variabile intera x.
*/

#include <stdio.h>

int main(void) {
    int c = 0;

    c = c + 1;
    printf("%d", c);
    c++;
    printf("%d", c);
    c+=1;
    printf("%d", c);
    ++c;
    printf("%d", c);
}



