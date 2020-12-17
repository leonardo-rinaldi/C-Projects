/*
    La funzione maximum trova il maggiore di tre numeri dati in
    ingresso.
*/

#include <stdio.h>

int maximum(int x, int y, int z);   //prototipo di funzione

int main(void) {
    int number1;
    int number2;
    int number3;

    printf("%s", "Enter three integers: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    printf("Maximum is: %d\n", maximum(number1, number2, number3));
}

    int maximum(int x, int y, int z) {
        int max = x;

        if(y > max) {
            max = y;
        }

        if(z > max) {
            max = z;
        }

        return max;
    }