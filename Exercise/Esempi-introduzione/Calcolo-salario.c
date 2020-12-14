/*
    Sviluppate un programma per calcolare lo stipendio lordo di ciascuno
    dei diversi impiegati. L'azienda paga quanto previsto all'ora per "l'orario
    lavorativo normale" per le prime 40 ore di lavoro e paga "una volta e mezza"
    per tutte le ore di lavoro oltre e 40 ore. Vi vengono dati una lista degli impiegati
    dell'azienda, il numero di ore in cui l'impiegato ha lavorato l'ultima settimana e la 
    paga oraria per ogni impiegato e determinare e stampare lo stipendio lordo.
*/

#include <stdio.h>

int main(void) {
    int ore = 0;
    double salarioOra = 0;
    double salarioTotale = 0;

    puts("Enter # of hours worked (-1 to end):");
    scanf("%d", &ore);

    while(ore != -1) {
        if(ore > 40) {
            puts("Enter hourly rate of the worker ($00.00):");
            scanf("%lf", &salarioOra);
            int oreRimanenti = ore - 40;
            ore -= oreRimanenti; 
            salarioTotale = salarioOra * ore;
            salarioTotale = salarioTotale + (oreRimanenti * 15);
            printf("Salary is %.2lf \n", salarioTotale);

        } else {
            puts("Enter hourly rate of the worker ($00.00):");
            scanf("%lf", &salarioOra);
            salarioTotale = salarioOra * ore;
            printf("Salary is %.2lf \n", salarioTotale);
        }
        ore = 0;
        salarioOra = 0;
        salarioTotale = 0;
        puts("Enter # of hours worked (-1 to end):");
        scanf("%d", &ore);
    }
}