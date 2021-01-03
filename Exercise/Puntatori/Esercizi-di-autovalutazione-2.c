/*
    Per ognuna delle seguenti operazioni, scrivete un'istruzione che la esegua. Supponete
    che le variabili in virgola obile number1 e number2 siano state definite e che number1
    sia inizializzato a 7.3.

    a) Definire la variabile fPtr come puntatore a un oggetto di tipo float.
    b) Assegnare l'indirizzo della variabile number1 alla variabile puntatore fPtr.
    c) Stampare il valore dell'oggetto puntato da fPtr.
    d) Assegnare il valore dell'oggetto puntato da fPtr alla variabile number2.
    e) Stampare il valore number2.
    f) Stampare l'indirizzo di number1. Usate lo specificatore di conversione %p.
    g) Stampare l'indirizzo memorizzato in fPtr. Usare lo specificatore di conversione
       %p.
*/

#include <stdio.h>

int main(void) {
    float number1 = 7.3;
    float number2;

    //a)
    float *fPtr;

    //b)
    fPtr = &number1;

    //c)
    printf("%.1f \n", *fPtr);

    //d)
    number2 = *fPtr;

    //e)
    printf("%.1f \n", number2);

    //f)
    printf("%p \n", &number1);

    //g)
    printf("%p \n", fPtr);
}