/*
    Scrivete una funzione multiple che determini per una coppia di interi se il 
    secondo intero sia un multiplo del primo. La funzione deve ricevere due
    argomenti interi e restituire 1 (vero) se il secondo è un multiplo del primo 
    e 0 (falso) nel caso contrario. Usate questa funzione in un programma che riceve
    in ingresso una serie di coppie di interi.
*/

#include <stdio.h>

int multiple(int primoIntero, int secondoIntero);

int main(void) {
    int primoIntero, secondoIntero;

    puts("Inserisci una coppia di interi (-1 per fermarti):");
    scanf("%d %d", &primoIntero, &secondoIntero);

    while(primoIntero != -1) {
        printf("%d \n", multiple(primoIntero, secondoIntero));

        puts("Inserisci una coppia di interi (-1 per fermarti):");
        scanf("%d %d", &primoIntero, &secondoIntero);
    }
}

int multiple(int primoIntero, int secondoIntero) {
    int risultato;

    if(secondoIntero % primoIntero == 0) {
        risultato = 1;
    } else {
        risultato = 0;
    }
    return risultato;
}