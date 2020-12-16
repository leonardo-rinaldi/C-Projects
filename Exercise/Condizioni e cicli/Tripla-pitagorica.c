/*
    Un triangolo rettangolo può avere i lati tutti interi. L'insieme di tre valori
    interi per i lati di un triangolo rettangolo è chiamato tripla pitagorica. Questi
    tre lati devono soddisfare la relazione per cui la somma dei quadrati di due lati è
    uguale al quadrato dell'ipotenusa. Trovate tutte le triple pitagoriche per il lato 1
    lato 2 e l'ipotenusa, non più grandi di 500. Usate un ciclo for annidato tre volte,
    che tenti semplicemente tutte le possibilità.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    int lato1;
    int lato2;
    int ipotenusa;

    for(unsigned int i = 1; i <= 500; i++) {
        for(unsigned int j = 1; j <= 500; j++) {
            for(unsigned int k = 1; k <= 500; k++) {
                lato1 = i;
                lato2 = j;
                ipotenusa = k;
                int quadratoLato1 = pow(lato1, 2);
                int quadratoLato2 = pow(lato2, 2);
                int sommaQuadrati = quadratoLato1 + quadratoLato2;

                if(sommaQuadrati == ipotenusa) {
                    printf("Lato 1: %d, lato 2: %d, ipotenusa: %d \n", lato1, lato2, ipotenusa);
                }
            }
        }
    }
}