/*
    Scrivete una funzione distance che calcoli la distanza tra due punti
    (x1, y1) e (x2, y2). Tutti i numeri e i valori di ritorno devono essere
    di tipo double.
*/

#include <stdio.h>
#include <math.h>

double calcolaDistanza(double x1, double y1, double x2, double y2);

int main(void) {
    printf("%.2lf \n", calcolaDistanza(1, 2, 3, 4));
    printf("%.2lf \n", calcolaDistanza(1, -2, 2, 2));
    printf("%.2lf \n", calcolaDistanza(-3, -4, 0, 0));

}

double calcolaDistanza(double x1, double y1, double x2, double y2) {
    double distanza = 0;
    double primoArgomento = x2 - x1;
    double secondoArgomento = y2 - y1;

    distanza = sqrt( pow(primoArgomento, 2) + pow(secondoArgomento, 2));
    return distanza;
}

