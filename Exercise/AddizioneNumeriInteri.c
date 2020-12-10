/*
    Addizione di due numeri interi inseriti
*/

#include <stdio.h>

int main( void ) {
    int integer1;
    int integer2;

    printf("Enter the first integer \n");   //prompt
    scanf( "%d", &integer1);    //legge un intero

    printf("Enter the second integer \n");
    scanf("%d", &integer2);

    int sum;
    sum = integer1 + integer2;

    printf("Sum is %d\n", sum); //In questo caso ho due argomenti: lo specificatore di conversione "%d" e il valore da stampare sum
}