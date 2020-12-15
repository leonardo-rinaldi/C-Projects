/*
    Mentre fate esercizi fisici, potete usare un monitor della frequenza
    cardiaca, per vedere se la vostra frequenza stia entro un intervallo
    di sicurezza indicato dai vostri istruttori e medici. Secondo l'American
    Heart Association (AHA), la formula per calcolare la vostra massima frequenza
    cardiaca in battiti al minuto è 220 meno la vostra età. La vostra frequenza
    cardiaca normale è un intervallo che è il 50-80% della vostra massima frequenza
    cardiaca. Create un programma che legga la data di nascita dell'utente e il giorno
    corrente (mese, giorno e anno). Il vostro rogramma deve calcolare e impstrare l'età
    della persona, la sua massima frequenza cardiaca e il suo intervallo di frequenza 
    normale.
*/

#include <stdio.h>

int main(void) {
    int dataDiNascita;
    int età;
    int frequenzaMassima;
    int frequenzaNormale;

    puts("Inserisci la tua data di nascita:");
    scanf("%d", &dataDiNascita);

    età = 2020 - (dataDiNascita % 10000); //data nel formato ggmmaaaa
    frequenzaMassima = 220 - età;
    frequenzaNormale = 220 * 0.50;

    printf("La tua età è: %d \n", età);
    printf("La tua frequenza massima è: %d \n", frequenzaMassima);
    printf("La tua frequenza normale è: %d \n", frequenzaNormale);
}