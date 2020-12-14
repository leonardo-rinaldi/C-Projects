/*
    Scrivete un programma che legga il raggio di un cerchio (come valore float)
    e calcoli e stampi il diametro, la circonferenza e l'area. usate il valore
    3,14159 per π.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    float raggio;
    float diametro;
    float circonferenza;
    float area;

    puts("Inserisci il raggio di un cerchio:");
    scanf("%f", &raggio);

    diametro = 2 * raggio;
    circonferenza = 2 * 3.14159 * raggio;
    area = 3.14159 * (pow(raggio, 2));

    printf("Diametro: %.2f \n", diametro);
    printf("Circonferenza: %.2f \n", circonferenza);
    printf("Area: %.2f \n", area);
}