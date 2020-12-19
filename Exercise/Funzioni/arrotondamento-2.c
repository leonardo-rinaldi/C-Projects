/*
    La funzione floor può essere usata per arrotondare un numero in riferimento
    a una specifica posizione decimale. L'istruzione
    
    y = floor(x * 10 + .5) / 10;

    arrotonda x alla osizione dei decimi (la prima posizione alla destra del punto
    decimale). Scrivete un programma che definisca quattro funzioni per arrotondare 
    un numero x in vari modi.
    a) roundToInteger(number)   //arrotonda all'intero più vicino
    b) roundToTenths(number)    //arrotonda alla posizione dei decimi
    c) roundToHoundreths(number)    //arrotonda alla posizione dei centesimi
    d) roundToThousandths(number)   //arrotonda alla posizione delle migliaia
    Per ogni valore letto, il vostro programma deve stampare il valore originario, il
    numero arrotondato all'intero più vicino, il numero arrotondato alla posizione dei
    decimi, il numero arrotondato alla posizione dei centesimi e il numero arrotondato
    alla posizione delle migliaia.
*/

#include <stdio.h>
#include <math.h>

int roundToInteger(double number);
double roundToTenths(double number);
double roundToHundreths(double number);
double roundToThousandths(double number);

int main(void) {

    double valore;
    double y;

    puts("Inserisci un valore:");
    scanf("%lf", &valore);

    y = roundToInteger(valore);
    printf("L'intero più vicino di %lf è %.0lf \n", valore, y);
    y = roundToTenths(valore);
    printf("La posizione decimale di %lf è %.1lf \n", valore, y);
    y = roundToHundreths(valore);
    printf("La posizione dei centesimi di %lf è %.2lf \n", valore, y);
    y = roundToThousandths(valore);
    printf("La posizione delle migliaia di %lf è %.3lf \n", valore, y);
}

int roundToInteger(double number) {
    double y;

    y = floor(number * 1 + .5) / 1;
    return y;
}

double roundToTenths(double number) {
    double y;

    y = floor(number * 10 + .5) / 10;
    return y;
}

double roundToHundreths(double number) {
    double y;

    y = floor(number * 100 + .5) / 100;
    return y;
}

double roundToThousandths(double number) {
    double y;

    y = floor(number * 1000 + .5) / 1000;
    return y;
}