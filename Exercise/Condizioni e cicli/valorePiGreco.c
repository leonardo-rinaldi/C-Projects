/*
    Calcolate il valore pigreco in base alla serie infinita

    pigreco = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...
*/

#include <stdio.h>

int main(void) {
    double pigreco = 4;
    int valoreLimite = 13;

    for(int i = 3; i <= valoreLimite; i += 4) {
        double valore = i;
        double primoValore = (4/valore);
        double secondoValore = (4/(valore+2));

        if(valore + 2 >= valoreLimite) {
            pigreco -= primoValore;
        } else {
            pigreco -= primoValore;
            pigreco += secondoValore;
        }
        

    }
    printf("%lf", pigreco);
}