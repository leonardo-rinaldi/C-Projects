/*
    In questo esercizio vi occuperete di uno schema semplice per criptare 
    e decriptare dati. un'azienda che vuole inviare dati su Internet vi ha
    chiesto di scrivere un programma per criptarli, così da poterli trasmettere
    con maggiore sicurezza. Tutti i dati sono trasmessi come numeri interi di
    quattro cifre. La vostra applicazione deve leggere un numero intero di quattro 
    cifre inserito dall'utente e criptarlo come segue: sostituite ogni cifra con
    il risultato ottenuto agiungendo 7 alla cifra e calcolando il resto dopo aver 
    diviso il nuovo valore per 10. Poi scambiate la prima cifra con la terza e quindi
    la seconda con la quarta, per poi stampare il numero intero criptato. Scrivete
    un'applicazione separata che inserisca un numero intero criptato di quattro cifre
    e lo decripti (invertendo lo schema di criptazione) per ricostruire il numero originario.
*/

#include <stdio.h>

int main(void) {
    int num;
    int primaCifra;
    int secondaCifra;
    int terzaCifra;
    int quartaCifra;

    puts("Inserisci un numero a 4 cifre da criptare:");
    scanf("%d", &num);

    primaCifra = num / 1000;
    num %= 1000;
    secondaCifra = num / 100;
    num %= 100;
    terzaCifra = num / 10;
    num %= 10;
    quartaCifra = num;

    primaCifra = ((primaCifra + 7) / 10) + ((primaCifra + 7) % 10);
    secondaCifra = ((secondaCifra + 7) / 10) + ((secondaCifra + 7) % 10);
    terzaCifra = ((terzaCifra + 7) / 10) + ((terzaCifra + 7) % 10);
    quartaCifra = ((quartaCifra + 7) / 10) + ((quartaCifra + 7) % 10);

    printf("%d%d%d%d \n", terzaCifra, quartaCifra, secondaCifra, primaCifra);

}