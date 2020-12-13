/*
    I guidatori sono interessati al consumo effetuato dalle loro autonobili. Un
    guidatore ha tenuto traccia dei vari pieni di carburante, registrando le miglia
    percorse e i galloni consumati a ogni pieno. Realizzate u programma che chieda
    di inserire le miglia percorse e i galloni consumati a ogni pieno. Il programma
    deve calcolare e stampare le miglia per gallone percorse per ogni pieno. Dopo
    aver processato tutte le informazioni di input, il programma deve calcolare e 
    stampare le miglia complessive per gallone percorse per tutti i pieni.
*/

#include <stdio.h>

int main(void) {
    double galloni;
    double miglia;
    double totale;
    double migliaComplessive = 0;
    double galloniComplessivi = 0;

    puts("Enter the gallon used (-1 to end):");
    scanf("%lf", &galloni);

    while(galloni != -1) {  
        puts("Enter the miles driven:");
        scanf("%lf", &miglia);
        totale = 0;
        totale = miglia / galloni;
        migliaComplessive += miglia;
        galloniComplessivi += galloni;
        printf("The miles/gallon for this thank was %lf \n", totale);

        puts("Enter the gallon used (-1 to end):");
        scanf("%lf", &galloni);
    }

    printf("The overall average miles/gallon was %lf \n", migliaComplessive / galloniComplessivi);
}