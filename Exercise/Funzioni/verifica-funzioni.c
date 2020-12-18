/*
    Scrivete un programma che verifichi se le funzioni della libreria math
    producano realmente i  risultati indicati.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double x = 2;
    int y = 4;

    printf("%lf \n", sqrt(y));   //radice quadrata di y
    printf("%lf \n", cbrt(x));   //radice cubica di x
    printf("%lf \n", exp(x));     //funzione esponenziale e^x
    printf("%lf \n", log(x));    //logaritmo naturale di x (in base e)
    printf("%lf \n", log10(x));  //logaritmo di x (in base 10)
    printf("%lf \n", fabs(-13.5));   // valore assoluto di x vom numero in virgola mobile
    printf("%lf \n", ceil(9.2));     //arrotonda x all'intero più piccolo non minore di x
    printf("%lf \n", floor(9.2));    //arrotonda x all'intero più grande non maggiore di x
    printf("%lf \n", pow(x, y));     //x elevato alla potenza y (x^y)
    printf("%lf \n", fmod(x, y));    //resto di x/y come numero in virgola mobile
    printf("%lf \n", sin(0.0));       //funzione trigonometrica seno di x (x in radianti)
    printf("%lf \n", cos(0.0));       //funzione trigonometrica coseno di x (x in radianti)
    printf("%lf \n", tan(0.0));       //funzione trigonometrica tangente di x (x in radianti)
}