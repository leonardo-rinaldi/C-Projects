/*
    Scrivete un programma che legga il lato di un quadrato e poi stampi
    quel quadrato con asterischi. Il programma deve operare con quadrati
    dalle dimensioni dei lati tra 1 e 20. Ad esempio, se il programma legge
    una dimensione pari a 4, deve stampare:

    ****
    ****
    ****
    ****
*/

#include <stdio.h>

int main(void) {
    int lunghezzaAttuale = 0;
    int riga = 0;
    int lato = 0;

    puts("Inserire la lunghezza del lato di un quadrato:");
    scanf("%d", &lato);

    while(riga != lato) {
        while(lunghezzaAttuale != lato) {
            printf("%s", "*");
            lunghezzaAttuale++;
        }
      puts("");
      lunghezzaAttuale = 0;
      riga++;
    }
}