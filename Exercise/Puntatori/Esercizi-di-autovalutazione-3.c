/*
    Eseguire ognuna delle seguenti operazioni:
    a) Scrivete l'intestazione per una funzione chiamata exchange che riceve
       come parametri due puntatori ai numeri in virgola mobile x e y e non
       restituisce alcun valore.
    b) Scrivete il prototipo di funzione per la funzione di cui alla voce a)
    c) Scrivete l'intestazione per una funzione chiamata evaluate che restituisce
       un intero e che riceve come parametri l'intero x e un puntatore alla funzione
       poly. La funzione poly riceve un parametro intero e restituisce un intero.
    d) Scrivete il prototipo di funzione per la funzione di cui alla voce c).
*/

#include <stdio.h>

void exchange(float *x, float *y);
int evaluate(int x, int (*poly)(int a));

int main(void) {

}

void exchange(float *x, float *y) {

}

int evaluate(int x, int (*poly)(int a)) {
    return x;
}