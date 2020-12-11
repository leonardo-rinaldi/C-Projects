/*
    La formule per calcolare l'indice di massa corporea (BMI) è:

    BMI = peso in kilogrammi / altezza in metri * altezza in metri

    Create un applicazione che sia un calcolatore di BMI, che legga il
    peso dell'utente in kilogrammi e l'altezza in metri, poi calcolate e
    mostrate le seguenti informazioni tratte dal department of Health and
    Human Services / National Institutes of Health, così che l'utente possa
    valutare il suo BMI:

    VALORI del BMI
    Sottopeso: meno di 18.5
    Normale: tra 18.5 e 24.9
    Sovrappeso: tra 25 e 29.9
    Obeso: 30 o oltre

*/

#include <stdio.h>

int main(void) {
    double altezza, peso;

    printf("%s", "Inserire la propria altezza: ");
    scanf("%lf", &altezza);
    printf("%s", "Inserire il proprio peso: ");
    scanf("%lf", &peso);

    double bmi = peso / (altezza * altezza);

    printf("%s \n", "VALORI del BMI");
    printf("%s \n", "Sottopeso: meno di 18.5");
    printf("%s \n", "Normale: tra 18.5 e 24.9");
    printf("%s \n", "Sovrappeso: tra 25 e 29.9");
    printf("%s \n", "Obeso: 30 o oltre");
    printf("Il tuo valore BMI è: %lf \n", bmi);
}