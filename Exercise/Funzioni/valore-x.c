/*
    Determinate il valore di x dopo l'esecuzione di ciascuna delle
    seguenti istruzioni:

    x = fabs(7.5)
    x = floor(7.5)
    x = fabs(0.0)
    x = ceil(0.0)
    x = fabs(-6.4)
    x = ceil(-6.4)
    x = ceil(-fabs(-8 + floor(-5.5)))
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double x;

    x = fabs(7.5);
    printf("%lf \n", x);
    x = floor(7.5);
    printf("%lf \n", x);
    x = fabs(0.0);
    printf("%lf \n", x);
    x = ceil(0.0);
    printf("%lf \n", x);
    x = fabs(-6.4);
    printf("%lf \n", x);
    x = ceil(-6.4);
    printf("%lf \n", x);
    x = ceil(-fabs(-8 + floor(-5.5)));
    printf("%lf \n", x);

}