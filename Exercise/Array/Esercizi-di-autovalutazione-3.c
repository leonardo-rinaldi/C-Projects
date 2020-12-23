/*
    Scrivete istruzioni per effettuare ognuna delle seguenti operazioni:
    a) Stampate il valore del settimo elemento di un array di caratteri f.
    b) Inserire un valore nell'elemento 4 di un'array b unidimensionale di
       elementi in virgola mobile.
    c) Inizializzare ognuno dei cinque elementi di un array intero g con singolo
       indice a 8.
    d) Sommare gli elementi dell'array c in virgola mobile di 100 elementi.
    e) Copiare l'array a nella prima porzione dell'array b. Presupponete double
       a[11], b[34];
    f) Determinare e stampare il valore più piccolo e il valore più grande contenuti
       nell'array w in virgola mobile di 99 elementi.
*/

#include <stdio.h>

int main(void) {
    char f[9] = "Leonardo";

    printf("%c \n", f[6]);

    double b[5] = {0};
    b[4] = 4.2;

    int g[5] = {8, 8, 8, 8, 8};

    float c[100] = {0};
    for(size_t i = 0; i < 100; i++) {
        c[i] = i * i;
    }

    float totale = 0;
    for(size_t j = 0; j < 100; j++) {
        totale += c[j];
    }

    double a[11], d[34];

    for(size_t x = 0; x < 11; x++) {
        d[x] = a[x];
    }

    float w[99] = {0};

    for(size_t i = 0; i < 99; i++) {
        w[i] = i * 2;
    }

    float maggiore = 0;
    for(size_t x = 0; x < 99; x++) {
        if(w[x] > maggiore) {
            maggiore = w[x];
        }
    }
    printf("%f", maggiore);
}