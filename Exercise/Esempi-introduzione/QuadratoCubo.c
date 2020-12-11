/*
    Usando solo le tecniche che avete appreso in questo capitolo,
    scrivete un programma che calcoli i quadrati e i cubi dei numeri
    da 0 a 10 e usi tabulazione per stampare la seguente tavola di valori:

    numero  quadrato    cubo
    0       0           0
    1       1           1
    2       4           8
    3       9           27
    4       16          64
    5       25          125
    6       36          216
    7       49          343
    8       64          512
    9       81          729
    10      100         1000
*/

#include <stdio.h>

int main(void) {
    printf("%s \n", "numero    quadrato    cubo");
    printf("%d          %d           %d \n", 0, 0 * 0, 0 * 0 * 0);
    printf("%d          %d           %d \n", 1, 1 * 1, 1 * 1 * 1);
    printf("%d          %d           %d \n", 2, 2 * 2, 2 * 2 * 2);
    printf("%d          %d           %d \n", 3, 3 * 3, 3 * 3 * 3);
    printf("%d          %d          %d \n", 4, 4 * 4, 4 * 4 * 4);
    printf("%d          %d          %d \n", 5, 5 * 5, 5 * 5 * 5);
    printf("%d          %d          %d \n", 6, 6 * 6, 6 * 6 * 6);
    printf("%d          %d          %d \n", 7, 7 * 7, 7 * 7 * 7);
    printf("%d          %d          %d \n", 8, 8 * 8, 8 * 8 * 8);
    printf("%d          %d          %d \n", 9, 9 * 9, 9 * 9 * 9);
    printf("%d         %d         %d \n", 10, 10 * 10, 10 * 10 * 10);
}