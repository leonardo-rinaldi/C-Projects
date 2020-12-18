/*
    Un garage fa pagare una tariffa minima di $2,00 per parcheggiare
    fino a tre ore, più $0,50 all'ora per ogni ora o parte di essa
    oltre le tre ore. Il costo massimo per un dato periodo di 24 ore
    è di $10,00. Supponete che nessuna macchina resti parcheggiata per
    più di 24 ore. Scrivete un programma che calcoli e stampi i costi 
    del parcheggio per ciascuno dei tre clienti che ieri hanno parcheggiato 
    le loro in questo garage. Dovete inserire le ore di parcheggio per ogni 
    cliente. Il vostro programma deve stampare i risultati in un formato 
    tabellare e deve calcolare e stampare il totale degli incassi di ieri.
    Il programma deve usare la funzione calciulateCharges per determinare il
    costo per ogni cliente. Il vostro output deve avere il seguente formato:
    Car     Hours     Charge
    1         1.5       2.00
    2         4.0       2.50
    3        24.0      10.00
    TOTAL    29.5      14.50
*/

#include <stdio.h>

double calculateCharges(double ore);

int main(void) {
    double totaleParcheggio;
    double totaleOre = 1.5 + 4.0 + 24.0;
    double totaleTariffe = 0;

    printf("%s", "Car");
    printf("%10s", "Hours");
    printf("%10s \n", "Charge");

    printf("%d", 1);
    printf("%12.1lf", 1.5);
    totaleParcheggio = calculateCharges(1.5);
    totaleTariffe += totaleParcheggio;
    printf("%10.2lf \n", totaleParcheggio);

    printf("%d", 2);
    printf("%12.1lf", 4.0);
    totaleParcheggio = calculateCharges(4);
    totaleTariffe += totaleParcheggio;
    printf("%10.2lf \n", totaleParcheggio);

    printf("%d", 3);
    printf("%12.1lf", 24.0);
    totaleParcheggio = calculateCharges(24);
    totaleTariffe += totaleParcheggio;
    printf("%10.2lf \n", totaleParcheggio);

    printf("%s", "TOTAL");
    printf("%8.1lf", totaleOre);
    printf("%10.2lf \n", totaleTariffe);
}

double calculateCharges(double ore) {
    double totale = 0;
    double oreInPiù = 0;
    double sommaInPiù;

    if(ore <= 3) {
        totale += 2;
    } else {
        totale += 2;
        oreInPiù = ore - 3;
        sommaInPiù = oreInPiù * 0.50;
        totale += sommaInPiù;
    }
    return totale;
}