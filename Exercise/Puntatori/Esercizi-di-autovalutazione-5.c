/*
    Per ognuna delle seguenti operazioni, scrivete un'istruzione singola 
    che la esegua. Supponete che le variabili intere di tipo long value1
    e value2 siano state definite e che value1 sia stata inizializzata a 
    200000.
    a) Definire la variabile lPtr come puntatore a un oggetto di tipo long.
    b) Assegnare l'indirizzo della variabile value1 alla variabile puntatore
       lPtr.
    c) Stampate il valore dell'oggetto puntato da lPtr.
    d) Assegnare il valore dell'oggetto puntato da lPtr alla variabile value2.
    e) Stampate il valore di value2.
    f) Stampare l'indirizzo di value1.
    g) Stampare l'indirizzo memorizzato in lPtr.
*/

#include <stdio.h>

int main(void) {
    long value1 = 200000;
    long value2;

    //a)
    long *lPtr;
    
    //b)
    lPtr = &value1;

    //c)
    printf("%ld \n", *lPtr);

    //d)
    value2 = *lPtr;

    //e)
    printf("%ld \n", value2);

    //f)
    printf("%p \n", &value1);

    //g)
    printf("%p \n", lPtr);
}