/*
    Scrivete un programma per risolvere il problema delle Torri di Hanoi.
    Usate una funzione ricorsiva con quattro parametri:
    a) Il numero di dischi da spostare
    b) Il piolo su cui questi dischi sono inizialmente infilati.
    c) Il piolo da usare come supporto temporneo.
    d) Il piolo nel quale spostare questa pila di dischi.

    Il vostro programma deve stampare le istruzioni esatte, necessarie a
    spostare i dischi dal piolo di partenza al piolo di arrivo.

    Ad esempio, per spostare una pila di tre dischi dal piolo 1 al piolo 3,
    il vostro programma deve stampare la seguente serie di mosse:
    1 -> 3 (Questo significa uovere un disco dal piolo 1 al piolo 3)
    1 -> 2
    3 -> 2
    1 -> 3
    2 -> 1
    2 -> 3
    1 -> 3
*/

#include <stdio.h>

void hanoi(int n, int a, int b, int c);

int main(void) {
    hanoi(3, 1, 2, 3);
}

void hanoi(int n, int a, int b, int c) {
    if(n == 1) {
        printf("%d -> %d \n", a, c);
    } else {
        hanoi(n - 1, a, c, b );
        printf("%d -> %d \n", a, c);
        hanoi(n - 1, b, a, c);
    }
}