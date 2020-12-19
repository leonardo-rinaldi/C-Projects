/*
    Definite una funzione chiamata hypotenuse che calcoli la lunghezza
    dell'ipotenusa di un triangolo rettangolo quando sono dati gli altri
    due lati. La funzione deve ricevere due argomenti di tipo double e
    restituire l'ipotenusa come un double.
*/

#include <stdio.h>
#include <math.h>

double hypotenuse(double lato1, double lato2);

int main(void) {
    double lato1, lato2;
    double ipotenusa;
    
    lato1 =  3.0;
    lato2 = 4.0;
    ipotenusa = hypotenuse(lato1, lato2);
    printf("Ipotenusa: %.2lf \n", ipotenusa);

    lato1 = 5.0;
    lato2 = 12.0;
    ipotenusa = hypotenuse(lato1, lato2);
    printf("Ipotenusa: %.2lf \n", ipotenusa);

    lato1 = 8.0;
    lato2 = 15.0;
    ipotenusa = hypotenuse(lato1, lato2);
    printf("Ipotenusa: %.2lf \n", ipotenusa);
}

double hypotenuse(double lato1, double lato2) {
    double ipotenusa;
    
    ipotenusa = sqrt(pow(lato1, 2) + pow(lato2, 2));
    return ipotenusa;
}
